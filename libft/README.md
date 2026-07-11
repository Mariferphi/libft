# *Este proyecto ha sido creado como parte del currículo de 42 por marbecer.*

# Libft

## Descripción

**libft** es el primer proyecto del currículo de 42 y consiste en desarrollar una biblioteca propia en lenguaje C que reimplementa funciones fundamentales de la biblioteca estándar, además de incorporar utilidades adicionales para facilitar el desarrollo de futuros proyectos.

El objetivo principal es comprender en profundidad el funcionamiento de las funciones estándar de C, practicar la gestión manual de memoria, el manejo de cadenas, listas enlazadas y consolidar buenas prácticas de programación, como la modularidad y la reutilización de código.

La biblioteca generada servirá como base para numerosos proyectos posteriores del currículo de 42.

---

## Características

La biblioteca incluye funciones organizadas en las siguientes categorías:

- **Funciones de la libc**
  - Manipulación de memoria.
  - Manipulación de cadenas.
  - Conversión entre tipos.
  - Comprobación de caracteres.
  - Entrada y salida sobre descriptores de archivo.

- **Funciones adicionales**
  - División de cadenas.
  - Eliminación de espacios.
  - Mapeo e iteración sobre cadenas.
  - Conversión de enteros a cadenas.
  - Otras utilidades no presentes en la biblioteca estándar.

  - Implementación de listas enlazadas simples (`t_list`) con funciones para:
    - Crear nodos.
    - Añadir elementos al principio y al final.
    - Obtener el tamaño de la lista.
    - Buscar el último nodo.
    - Eliminar nodos.
    - Limpiar listas completas.
    - Iterar sobre la lista.
    - Crear nuevas listas mediante funciones de transformación.

---

## Estructura del proyecto

```text
libft/
├── Makefile
├── libft.h
├── *.c
└── README.md
```

---

## Descripción de la librería

La librería está compuesta por una colección de funciones reutilizables implementadas desde cero siguiendo las especificaciones del proyecto de 42.

### Funciones de comprobación de caracteres

Permiten verificar propiedades de un carácter.

| Función | Descripción |
|---------|-------------|
| `ft_isalpha` | Comprueba si un carácter es alfabético. |
| `ft_isdigit` | Comprueba si un carácter es un dígito. |
| `ft_isalnum` | Comprueba si un carácter es alfanumérico. |
| `ft_isascii` | Comprueba si pertenece al conjunto ASCII. |
| `ft_isprint` | Comprueba si el carácter es imprimible. |

### Conversión de caracteres

| Función | Descripción |
|---------|-------------|
| `ft_toupper` | Convierte un carácter a mayúscula. |
| `ft_tolower` | Convierte un carácter a minúscula. |

### Manipulación de memoria

| Función | Descripción |
|---------|-------------|
| `ft_memset` | Rellena un bloque de memoria con un valor. |
| `ft_bzero` | Inicializa un bloque de memoria a cero. |
| `ft_memcpy` | Copia memoria entre regiones no solapadas. |
| `ft_memmove` | Copia memoria entre regiones solapadas. |
| `ft_memchr` | Busca un byte dentro de un bloque de memoria. |
| `ft_memcmp` | Compara dos bloques de memoria. |
| `ft_calloc` | Reserva memoria inicializada a cero. |

### Manipulación de cadenas

| Función | Descripción |
|---------|-------------|
| `ft_strlen` | Devuelve la longitud de una cadena. |
| `ft_strlcpy` | Copia una cadena de forma segura. |
| `ft_strlcat` | Concatena cadenas de forma segura. |
| `ft_strchr` | Busca la primera aparición de un carácter. |
| `ft_strrchr` | Busca la última aparición de un carácter. |
| `ft_strncmp` | Compara dos cadenas. |
| `ft_strnstr` | Busca una subcadena. |
| `ft_strdup` | Duplica una cadena. |

### Conversión de datos

| Función | Descripción |
|---------|-------------|
| `ft_atoi` | Convierte una cadena en entero. |
| `ft_itoa` | Convierte un entero en cadena. |

### Gestión de cadenas

| Función | Descripción |
|---------|-------------|
| `ft_substr` | Extrae una subcadena. |
| `ft_strjoin` | Une dos cadenas. |
| `ft_strtrim` | Elimina caracteres de los extremos. |
| `ft_split` | Divide una cadena usando un delimitador. |
| `ft_strmapi` | Aplica una función sobre cada carácter de una cadena. |
| `ft_striteri` | Itera sobre una cadena modificándola. |

### Salida por descriptor de archivo

| Función | Descripción |
|---------|-------------|
| `ft_putchar_fd` | Escribe un carácter en un descriptor de archivo. |
| `ft_putstr_fd` | Escribe una cadena. |
| `ft_putendl_fd` | Escribe una cadena seguida de un salto de línea. |
| `ft_putnbr_fd` | Escribe un número entero. |

### Listas enlazadas

La estructura utilizada es:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

Funciones implementadas:

| Función | Descripción |
|---------|-------------|
| `ft_lstnew` | Crea un nuevo nodo. |
| `ft_lstadd_front` | Añade un nodo al principio. |
| `ft_lstsize` | Devuelve el tamaño de la lista. |
| `ft_lstlast` | Devuelve el último nodo. |
| `ft_lstadd_back` | Añade un nodo al final. |
| `ft_lstdelone` | Elimina un nodo. |
| `ft_lstclear` | Libera toda la lista. |
| `ft_lstiter` | Recorre la lista aplicando una función. |
| `ft_lstmap` | Crea una nueva lista aplicando una función a cada nodo. |

---

## Instrucciones

### Requisitos

- Make

### Compilar la librería

```bash
make
```

Generará:

```text
libft.a
```

### Limpiar archivos objeto

```bash
make clean
```

### Eliminar objetos y librería

```bash
make fclean
```

### Recompilar completamente

```bash
make re
```

---

## Ejemplo de uso

```c
#include "libft.h"

int main(void)
{
	char *str;

	str = ft_strdup("Hola, mundo!");
	ft_putendl_fd(str, 1);
	free(str);
	return (0);
}
```

Compilación:

```bash
cc -Wall -Wextra -Werror main.c libft.a
```

---

## Decisiones técnicas

- Todas las funciones han sido implementadas desde cero.
- Se ha seguido la Norminette de 42.
- La biblioteca está diseñada para ser reutilizable en proyectos posteriores.
- Se ha prestado especial atención a la gestión de memoria y al tratamiento de casos límite.

---

## Aprendizajes

Durante este proyecto se han consolidado conocimientos sobre:

- Gestión manual de memoria.
- Punteros.
- Cadenas de caracteres.
- Bibliotecas estáticas.
- Modularización del código.
- Listas enlazadas.
- Programación defensiva.
- Reutilización de código.

---

## Recursos

### Documentación

- Manuales de Unix (`man`)
- POSIX (The Open Group)
- GNU C Library Documentation

### Uso de Inteligencia Artificial

La IA se utilizó exclusivamente como herramienta de apoyo para:

- Resolver dudas conceptuales sobre el lenguaje C.
- Consultar el comportamiento esperado de determinadas funciones estándar.
- Revisar la redacción y estructura de este README.
- Obtener sugerencias para mejorar la legibilidad del código.