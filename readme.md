# 📢 Libft - 42 Project

## 📜 Descripción

**Libft** es un proyecto del programa 42 que consiste en crear una biblioteca personalizada de funciones comunes de la programación en C. Su propósito es mejorar las habilidades de manejo de cadenas, memoria y funciones básicas, al tiempo que se implementan funcionalidades estándar de C que se encuentran en la biblioteca estándar.

---

## 📋 Requisitos

Antes de compilar y ejecutar el proyecto, asegúrate de tener:

- 🛠️ gcc: Compilador de C.
-	🛠️ make: Herramienta de construcción.
-	🖥️ Sistema operativo: Unix o Mac.

## 🛠️ Cómo Compilar y Ejecutar

1.	Clona este repositorio:
    ```bash
    git clone https://github.com/Kevgonz93/libft.git
    ```

2. Navega al directorio del proyecto:
   ```bash
   cd libft
   ```   

3. Compila el programa utilizando `make` (incluye las funciones bonus):
   ```bash
   make all
   ```

4. Compila junto a el main facilitado u otro que tengas:
   ```bash
   cc libftmain.c libft.a -o libft
   ```

6. Ejecuta para ver el resultado:

    ```bash
    ./libft
   ```

---

## 🚀 Características

✔️ Implementación de funciones estándar como memset, strdup, atoi, calloc, split, join, entre otras.
✔️ Funciones de manipulación de cadenas y memoria.
✔️ Optimización y eficiencia en la manipulación de estructuras y punteros.
✔️ Funciones generales de utilidad como listas enlazadas y estructuras.
✔️ Cumple con las restricciones de tiempo y espacio del proyecto.

## 🧠 Estrategia de Solución

🔍 División de funciones: La biblioteca se organiza en módulos o carpetas según la funcionalidad: manipulación de cadenas, funciones de memoria, listas enlazadas, etc.
🔍 Optimización: Se enfoca en la eficiencia en el uso de memoria y la ejecución de las funciones.
🔍 Compatibilidad: Asegura que todas las funciones trabajen correctamente en proyectos 42 que utilicen esta biblioteca.

---

## 🧪 Pruebas

Ejemplos de ejecución:

1.	Para usar libft.a en tu proyecto:

Asegúrate de agregar el archivo libft.a a tu proyecto y compilarlo junto con el resto del código. Si usas make, simplemente incluye libft.a en la variable de objetos de tu Makefile.

2.	Para probar algunas funciones:

Se recomienda crear un archivo de prueba test.c donde puedas incluir el siguiente código y comprobar la ejecución de las funciones implementadas:

    ```bash
    #include "libft.h"

    int main() 
    {
        char *str = "Hello, 42!";
        printf("String length: %zu\n", ft_strlen(str));
        printf("Uppercase: %s\n", ft_strtoupper(str));
        return 0;
    }
    ```

---

## 📂 Estructura del Proyecto

```
📦 libft
├── 📂 bonus            # Funciones bonus
├── 📂 src              # Funciones principales
├── libft_main.c        # Archivo con main tester
├── libft.h             # Archivo de cabecera
├── Makefile            # Archivo para la compilación
├── README.md           # Este documento
└── subject.pdf            # Enunciado del proyecto en pdf
```

---

## 🧑‍💻 Autor

[Kevin Gonzales](https://github.com/Kevgonz93)
