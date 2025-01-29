/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kegonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:44:56 by kegonzal          #+#    #+#             */
/*   Updated: 2024/09/18 15:44:58 by kegonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// fake function for ft_strmapi
char	ft_alter(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		c -= 32;
	else if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

//	fake function for ft_striteri
void	ft_aux(unsigned int i, char *c)
{
	if (c[i] >= 'a' && c[i] <= 'z')
		c[i] -= 32;
	else if (c[i] >= 'A' && c[i] <= 'Z')
		c[i] += 32;
}

//	fake function for ft_lstdelone
void	del(void *content)
{
	if (content)
		free(content);
	return ;
}

//	fake function for ft_lstiter
void	f(void *content)
{
	int		i = 0;
	char	*str = (char *)content;

	while (str[i] != 0)
	{
		if (ft_isalpha(str[i]))
		{
			if(str[i] >= 'a' && str[i] <= 'z')
				str[i] = ft_toupper(str[i]);
			else
				str[i] = ft_tolower(str[i]);
		}
		i++;
	}
}

int	main(void)
{

	// functions_1.c
	char	a1 = 'a';
	char	a2 = '9';
	char	a3 = '&';
	char	a4 = 'f';
	char	a5 = '`';

	printf("the return of ft_isalpha is: %d \n", ft_isalpha(a1));
	printf("the return of ft_isdigit is: %d \n", ft_isdigit(a2));
	printf("the return of ft_isascii is: %d \n", ft_isalnum(a3));
	printf("the return of ft_isprint is: %d \n", ft_isascii(a4));
	printf("the return of ft_isprint is: %d \n", ft_isprint(a5));

	// functions_2.c
	char	b1[50] = "Hello World!";
	char	b2[10] = "";
	char	b3[10] = "";
	char	b4[50] = "";

	printf("the return of ft_strlen('%s') with a1 is: %zu \n", b1, ft_strlen(b1));
	ft_memset(b2, 'a', 5);
	printf("before to make ft_memset with 'a' is: %s \n", b2);
	ft_bzero(b3, 5);
	printf("before to make ft_bzero is: '%s' \n", b3);
	ft_memcpy(b4, b1, 3);
	printf("the return of ft_memcpy(b4 ,b1, 3) is: '%s' \n", b4);
	printf("after to make ft_memmove: '%s' \n", b1);
	ft_memmove(b1 + 5, b1, 12);
	printf("before to make ft_memmove is: %s \n", b1);

	// funcions_3.c
	char dst[] = "Hello";
	char aux[] = "";
	char src[] = ", World!";
	char c1 = 'f';
	char c2 = 'Z';
	char str[] = "Hello World!";
	int	result1 = ft_strlcpy(aux, dst, 5);
	int result2 = ft_strlcat(dst, src, 10);

	printf("the return of strcpy is: %d\n", result1);
	printf("the return of strlcat is: %d\n", result2);
	printf("c1 is: %c \n", c1);
	printf("the new c1 is: %c \n", ft_toupper(c1));
	printf("c2 is: %c \n", c2);
	printf("the new c2 is: %c \n", ft_tolower(c2));
	printf("the return of ft_strchr with W is: %s \n", ft_strchr(str, 'W'));

	//	functions_4.c
    char str1[]="hello word!";
    char str2[]="he";
	int	i = 3;
	int d1 = 10;
	char data[] = "Hello, World!";
	char to_find = 'W';
	char *result3 = (char *)ft_memchr(data, to_find, 13);

	printf("the return of strrchr(%s ,%d) is: %s \n", str1, i, ft_strrchr(str1, i));
	printf("the return of strncmp('%s', '%s', '%d') is: %d \n", str1, str2, i, ft_strncmp(str1, str2, i));
	if (result3 != NULL)
		printf("the return of memchr('%s', '%s', 13) is: %s \n", str1, str2, result3);
	printf("the return of memcmp( '%s', '%s', '%d') is: %d \n", str1, str2, d1, ft_memcmp(str1, str2, d1));
	printf("the return of strnstr('%s', '%s', '%d') is: %s \n", str1, str2, d1, ft_strnstr(str1, str2, d1));

	//	functions_5.c
	char	str3[] = "   -545";
	size_t	size = 5;
	int		*str4 = (int *)ft_calloc(size, sizeof(int));
	char	str5[] = "Hello World!";
	char	*fake = ft_strdup(str5);
	size_t		j = 0;

	printf("the return of atoi('%s') is: %d \n", str3, ft_atoi(str3));
	printf("the new memory of str4 before calloc is: \n");
	while (j < size)
	{
		printf("str4[%zu] = %d\n", j, str4[j]);
		j++;
	}
	free(str4);
	printf("the return of strdup('%s') saved in new variable is: '%s' \n", str5, fake);
	free(fake);

	//	aditionals
	// ft_substr :
	const char	*st1 = "awesome";
	char		*result4 = ft_substr(st1, 3, 4);
	printf("the return of ft_substr('%s', 3, 4): %s \n", st1, result4);
	free(result4);

	// ft_strjoin :
	const char *st2 = "Hello ";
	const char *st3 = "World!";
	char *joinresult = ft_strjoin(st2, st3);
	printf("the return of ft_strjoin('%s', '%s'): %s \n", st2, st3, joinresult);
	free(joinresult);

	// ft_strstrim

	char *strim_str = "-.,-.,42Madrid,.-,.-";
	char *strim_set = ",.-";
	char *strim_result = ft_strtrim(strim_str, strim_set);
	printf("the return of ft_strstrim('%s', '%s')\n", strim_str, strim_set);
	printf("is: '%s' \n", strim_result);
	free(strim_result);

	// ft_split :
	const char *st4 = "Hello World! This is 42!";
	char **restult5 = ft_split(st4, ' ');
	printf("the original string is: %s \n", st4);
	int k = 0;
	while (restult5[k] != 0)
	{
		printf("the matrix[%d] is: '%s' \n",k , restult5[k]);
		k++;
	}
	k = 0;
	while (restult5[k] != 0)
	{
		free(restult5[k]);
		k++;
	}
	free(restult5);
	
	// ft_itoa:
	int an1 = 3;
	int an2 = -3;
	int an3 = 2147483647;
	int an4 = -2147483648;
	int an5 = 0;

	char	*res1 = ft_itoa(an1);
	char	*res2 = ft_itoa(an2);
	char	*res3 = ft_itoa(an3);
	char	*res4 = ft_itoa(an4);
	char	*res5 = ft_itoa(an5);

	printf("the return is %s \n", res1);
	free(res1);
	printf("the return is %s \n", res2);
	free(res2);
	printf("the return is %s \n", res3);
	free(res3);
	printf("the return is %s \n", res4);
	free(res4);
	printf("the return is %s \n", res5);
	free(res5);

	// ft_strmapi:
	const char st5[] = "Hello World!";
	char *strmapi_result = ft_strmapi(st5, ft_alter);
	printf("the return of ft_strmapi(%s, ft_alter)\n", st5);
	printf("is: %s \n", strmapi_result);
	free(strmapi_result);

	//	ft_striteri:
	char	*st6 = ft_strdup("Hello World!");
	printf("before ft_striteri(%s, ft_aux): %s \n",st6, st6);
	ft_striteri(st6, ft_aux);
	printf("after ft_striteri(%s, ft_aux): %s \n",st6, st6);
	free(st6);

	//	ft_putchar_fd:
	ft_putchar_fd('A', 1);
	printf("\n");

	//	ft_putstr_fd:
	char	*st7 = "42Madrid";
	ft_putstr_fd(st7, 1);
	printf("\n");

	ft_putendl_fd(st7, 1);

	int num1 = 3;
	int num2 = -3;
	int num3 = 2147483647;
	int num4 = -2147483648;
	int num5 = 0;

	ft_putnbr_fd(num1, 1);
	printf("\n");
	ft_putnbr_fd(num2, 1);
	printf("\n");
	ft_putnbr_fd(num3, 1);
	printf("\n");
	ft_putnbr_fd(num4, 1);
	printf("\n");
	ft_putnbr_fd(num5, 1);
	printf("\n");

	//	BONUS:
	// ft_lstnew

	char		*bonus1n = ft_strdup("Lorem ipsum");
	t_list	*node1 = ft_lstnew(bonus1n);
	printf("the last node is: '%s' \n", (char *)node1->content);
	if (node1->next == NULL)
		printf("because next is: NULL \n");

	//	ft_lsadd_front
	char	*bonus2str = ft_strdup("42 Madrid");
	t_list	*node2 = ft_lstnew(bonus2str);
	ft_lstadd_front(&node1, node2);
	printf("the first node is: '%s', \n", (char *)node2->content);
	printf("the next node is: '%s' \n", (char *)node2->next->content);

	//	ft_lstsize
	printf("the size of the list is: '%d' \n", ft_lstsize(node2));

	//	ft_lstlast
	t_list	*bonus4last = ft_lstlast(node2);
	printf("the first node is: '%s', \n", (char *)node2->content);
	printf("the last node is: '%s' \n", (char *)bonus4last->content);

	//	ft_lstadd_back
	char	*bonus5str = ft_strdup("Hello World!");
	t_list	*node3 = ft_lstnew(bonus5str);
	ft_lstadd_back(&node1, node3);
	t_list	*bonus5lastnode = ft_lstlast(node2);
	printf("the new size of the list is: '%d' \n", ft_lstsize(node1));
	printf("the last node is: '%s' \n", (char *)bonus5lastnode->content);

	t_list	*bonus5no = node2;
	int		bonus5index = 0;
	printf("the list is: \n");
	while (bonus5no)
	{
		printf("\tnode[%d] = '%s'\n", bonus5index, (char *)bonus5no->content);
		bonus5index++;
		bonus5no = bonus5no->next;
	}
	//	ft_lstdelone

	ft_lstdelone(node3, del);
	node3 = NULL;
	if (node3 == NULL)
		printf("node3 is deleted.\n");
	ft_lstdelone(node1, del);
	node1 = NULL;
	if (node1 == NULL)
		printf("node1 is deleted.\n");
	ft_lstdelone(node3, del);
	node2 = NULL;
	if (node2 == NULL)
		printf("node2 is deleted.\n");


	// create new list
	char	*bonus6str1 = ft_strdup("new Hello World!");
	char	*bonus6str2 = ft_strdup("new 42 Madrid");
	char	*bonus6str3 = ft_strdup("Lorem ipsum");
	t_list	*bonus6node1 = ft_lstnew(bonus6str1);
	t_list	*bonus6node2 = ft_lstnew(bonus6str2);
	t_list	*bonus6node3 = ft_lstnew(bonus6str3);
	ft_lstadd_back(&bonus6node1, bonus6node2);
	ft_lstadd_back(&bonus6node1, bonus6node3);
	t_list	*bonust6nodeaux = bonus6node1;
	int		bonus6index = ft_lstsize(bonus6node1);
	printf("the bonus6list size is : %d \n", bonus6index);
	printf("the bonus6list is: \n");
	while (bonust6nodeaux)
	{
		printf("\tnode[%d] = '%s'\n", bonus6index, (char *)bonust6nodeaux->content);
		bonus6index--;
		bonust6nodeaux = bonust6nodeaux->next;
	}

	// ft_lstclear
	ft_lstclear(&bonus6node1, del);
	if (bonus6node1 == NULL)
		printf("the bonus6list is deleted.\n");

	// ft_lstiter
	char	*bonus8str1 = ft_strdup("new Hello World!");
	char	*bonus8str2 = ft_strdup("new 42 Madrid");
	char	*bonus8str3 = ft_strdup("Lorem ipsum");
	t_list	*bonus8node1 = ft_lstnew(bonus8str1);
	t_list	*bonus8node2 = ft_lstnew(bonus8str2);
	t_list	*bonus8node3 = ft_lstnew(bonus8str3);
	ft_lstadd_back(&bonus8node1, bonus8node2);
	ft_lstadd_back(&bonus8node1, bonus8node3);
	int		bonus8index = ft_lstsize(bonus8node1);
	printf("the new list size is : %d \n", bonus8index);
	t_list	*bonus8no = bonus8node1;
	printf("the bonus8list is: \n");
	while (bonus8no)
	{
		printf("\tnode[%d] = '%s'\n", bonus8index, (char *)bonus8no->content);
		bonus8index--;
		bonus8no = bonus8no->next;
	}
	ft_lstiter(bonus8node1, f);
	int	bonus8index2 = ft_lstsize(bonus8node1);
	printf("the bonus8list update is: \n");
	t_list	*bonus8no2 = bonus8node1;
	while (bonus8no2)
	{
		printf("\tnode[%d] = '%s'\n", bonus8index2, (char *)bonus8no2->content);
		bonus8index2--;
		bonus8no2 = bonus8no2->next;
	}
	ft_lstclear(&bonus8node1, del);
	if (bonus8node1 == NULL)
		printf("the bonus8list is deleted.\n");

	return (0);
}