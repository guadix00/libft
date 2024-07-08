# ¡LIBFT! Primer proyecto de 42 🚀🎉

## Proyecto de Funciones de C

Este es el primer proyecto de una serie donde implementamos y exploramos diversas funciones de la biblioteca estándar de C. En esta parte del proyecto, hemos llevado a cabo una serie de funciones esenciales que se utilizan comúnmente en el manejo de cadenas y memoria en C. A continuación, encontrarás una explicación detallada de cada función, incluyendo su propósito, la biblioteca de la que proviene, los errores que maneja (o no maneja), posibles usos y su valor de retorno.

| Función       | Biblioteca | Función       | Biblioteca | Función       | Biblioteca |
| ------------- | ----------- | ------------- | ----------- | ------------- | ----------- |
| [isalpha](ft_isalpha.c)   | <ctype.h>  | [tolower](ft_tolower.c) | <ctype.h>  | [memmove](ft_memmove.c) | <string.h>  |
| [isdigit](ft_isdigit.c)   | <ctype.h>  | [strchr](ft_strchr.c)  | <string.h>  | [strlcpy](ft_strlcpy.c) | <string.h>  |
| [isalnum](ft_isalnum.c)   | <ctype.h>  | [strrchr](ft_strrchr.c) | <string.h>  | [strlcat](ft_strlcat.c) | <string.h>  |
| [isascii](ft_isascii.c)   | <ctype.h>  | [strncmp](ft_strncmp.c) | <string.h>  | [atoi](ft_atoi.c)     | <stdlib.h>  |
| [isprint](ft_isprint.c)   | <ctype.h>  | [memchr](ft_memchr.c)  | <string.h>  | [calloc](ft_calloc.c)  | <stdlib.h>  |
| [strlen](ft_strlen.c)    | <string.h> | [memcmp](ft_memcmp.c)  | <string.h>  | [strdup](ft_strdup.c)  | <string.h>  |
| [memset](ft_memset.c)    | <string.h> | [strnstr](ft_strnstr.c)| <string.h>  |                 |             |
| [bzero](ft_bzero.c)      | <strings.h>| [toupper](ft_toupper.c) | <ctype.h>  |                 |             |
| [memcpy](ft_memcpy.c)    | <string.h> | [tolower](ft_tolower.c) | <ctype.h>  |                 |             |

## Funciones Adicionales Implementadas

| Nombre de función  | Descripción                                                                                       | Valor devuelto                                    |
| ------------------ | ------------------------------------------------------------------------------------------------- | ------------------------------------------------- |
| [ft_substr](ft_substr.c)   | Reserva (con malloc) y devuelve una substring de la string s. La substring empieza desde el índice start y tiene una longitud máxima len. | La substring resultante o NULL si falla la reserva de memoria. |
| [ft_strjoin](ft_strjoin.c) | Reserva (con malloc) y devuelve una nueva string, formada por la concatenación de s1 y s2. | La nueva string resultante o NULL si falla la reserva de memoria. |
| [ft_strtrim](ft_strtrim.c) | Reserva (con malloc) y devuelve una copia de s1 con los caracteres eliminados especificados en set desde el principio y el final de la string. | La string recortada o NULL si falla la reserva de memoria. |
| [ft_split](ft_split.c)     | Divide la string s en una array de strings usando el carácter c como delimitador.          | La array de nuevas strings resultantes o NULL si falla la reserva de memoria. |
| [ft_itoa](ft_itoa.c)       | Convierte el entero n a una string ASCII.                                                 | La string resultante o NULL si falla la reserva de memoria. |
| [ft_strmapi](ft_strmapi.c) | Aplica la función f a cada carácter de la string s para crear una nueva string resultante de las aplicaciones sucesivas de f. | La string resultante creada por las aplicaciones sucesivas de f. |
| [ft_striteri](ft_striteri.c)| Aplica la función f a cada carácter de la string s, pasando su índice como primer argumento. Cada carácter se pasa por valor a f para ser modificado si es necesario. | No devuelve valor. |
| [ft_putchar_fd](ft_putchar_fd.c)| Envía el carácter c al file descriptor especificado.                                    | No devuelve valor. |
| [ft_putstr_fd](ft_putstr_fd.c)| Envía la string s al file descriptor especificado.                                       | No devuelve valor. |
| [ft_putendl_fd](ft_putendl_fd.c)| Envía la string s al file descriptor especificado, seguido de un newline.              | No devuelve valor. |
| [ft_putnbr_fd](ft_putnbr_fd.c)  | Envía el número n al file descriptor especificado.                                    | No devuelve valor. |

## Descripción Detallada de Funciones

### [isalpha](isalpha.c)

- **Descripción**: Verifica si el carácter proporcionado es alfabético (a-z, A-Z).
- **Biblioteca**: <ctype.h>
- **Errores que maneja**: No maneja errores explícitamente.
- **Usos recomendados**: Validación de entrada para asegurarse de que los caracteres son letras.
- **Valor de retorno**: Devuelve 1 si el carácter es alfabético, de lo contrario devuelve 0.

### [isdigit](isdigit.c)

- **Descripción**: Verifica si el carácter proporcionado es un dígito (0-9).
- **Biblioteca**: <ctype.h>
- **Errores que maneja**: No maneja errores explícitamente.
- **Usos recomendados**: Validación de entrada para asegurarse de que los caracteres son dígitos.
- **Valor de retorno**: Devuelve 1 si el carácter es un dígito, de lo contrario devuelve 0.

### [isalnum](isalnum.c)

- **Descripción**: Verifica si el carácter proporcionado es alfanumérico (letra o dígito).
- **Biblioteca**: <ctype.h>
- **Errores que maneja**: No maneja errores explícitamente.
- **Usos recomendados**: Validación de entrada para asegurarse de que los caracteres son letras o dígitos.
- **Valor de retorno**: Devuelve 1 si el carácter es alfanumérico, de lo contrario devuelve 0.

### [isascii](isascii.c)

- **Descripción**: Verifica si el carácter proporcionado es un carácter ASCII.
- **Biblioteca**: <ctype.h>
- **Errores que maneja**: No maneja errores explícitamente.
- **Usos recomendados**: Validación de entrada para asegurarse de que los caracteres son ASCII.
- **Valor de retorno**: Devuelve 1 si el carácter es ASCII, de lo contrario devuelve 0.

### [isprint](isprint.c)

- **Descripción**: Verifica si el carácter proporcionado es imprimible.
- **Biblioteca**: <ctype.h>
- **Errores que maneja**: No maneja errores explícitamente.
- **Usos recomendados**: Validación de entrada para asegurarse de que los caracteres son imprimibles.
- **Valor de retorno**: Devuelve 1 si el carácter es imprimible, de lo contrario devuelve 0.

### [strlen](strlen.c)

- **Descripción**: Calcula la longitud de una cadena de caracteres.
- **Biblioteca**: <string.h>
- **Errores que maneja**: No maneja errores explícitamente.
- **Usos recomendados**: Manipulación de cadenas para conocer su longitud.
- **Valor de retorno**: Devuelve el número de caracteres en la cadena, excluyendo el carácter nulo.

### [memset](memset.c)

- **Descripción**: Establece un bloque de memoria con un valor específico.
- **Biblioteca**: <string.h>
- **Errores que maneja**: No maneja errores explícitamente.
- **Usos recomendados**: Inicialización de memoria con un valor específico.
- **Valor de retorno**: Devuelve un puntero al bloque de memoria.

### [bzero](bzero.c)

- **Descripción**: Establece un bloque de memoria a cero.
- **Biblioteca**: <strings.h>
- **Errores que maneja**: No maneja errores explícitamente.
- **Usos recomendados**: Inicialización de memoria a cero.
- **Valor de retorno**: Ninguno.

### [memcpy](memcpy.c)

- **Descripción**: Copia un bloque de memoria a otro.
- **Biblioteca**: <string.h>
- **Errores que maneja**: No maneja superposiciones de memoria.
- **Usos recomendados**: Copia de memoria sin superposición.
- **Valor de retorno**: Devuelve un puntero al bloque de memoria de destino.

### [memmove](memmove.c)

- **Descripción**: Mueve un bloque de memoria a otro, incluso si se superponen.
- **Biblioteca**: <string.h>
- **Errores que maneja**: Maneja superposiciones de memoria.
- **Usos recomendados**: Copia de memoria con posible superposición.
- **Valor de retorno**: Devuelve un puntero al bloque de memoria de destino.

### [strlcpy](strlcpy.c)

- **Descripción**: Copia una cadena a un tamaño específico de forma segura.
- **Biblioteca**: <string.h>
- **Errores que maneja**: No maneja errores explícitamente.
- **Usos recomendados**: Copia de cadenas garantizando la terminación nula.
- **Valor de retorno**: Devuelve el tamaño de la cadena que intentó crear.

### [strlcat](strlcat.c)

- **Descripción**: Concatenar cadenas con tamaño específico de forma segura.
- **Biblioteca**: <string.h>
- **Errores que maneja**: No maneja errores explícitamente.
- **Usos recomendados**: Concatenación de cadenas garantizando la terminación nula.
- **Valor de retorno**: Devuelve el tamaño total de la cadena que intentó crear.

### [atoi](atoi.c)

- **Descripción**: Convierte una cadena a un entero.
- **Biblioteca**: <stdlib.h>
- **Errores que maneja**: No maneja errores explícitamente.
- **Usos recomendados**: Conversión de cadenas a enteros para su uso en cálculos numéricos.
- **Valor de retorno**: Devuelve el entero convertido.

### [calloc](calloc.c)

- **Descripción**: Reserva un bloque de memoria para un número específico de elementos y los inicializa a cero.
- **Biblioteca**: <stdlib.h>
- **Errores que maneja**: No maneja errores explícitamente.
- **Usos recomendados**: Asignación segura de memoria para estructuras de datos dinámicas.
- **Valor de retorno**: Devuelve un puntero al bloque de memoria reservado.

### [memcmp](memcmp.c)

- **Descripción**: Compara los primeros n bytes de dos bloques de memoria.
- **Biblioteca**: <string.h>
- **Errores que maneja**: No maneja errores explícitamente.
- **Usos recomendados**: Comparación de bloques de memoria para determinar orden o igualdad.
- **Valor de retorno**: Devuelve un valor entero menor, igual o mayor que cero si el primer bloque es menor, igual o mayor que el segundo.

### [strdup](strdup.c)

- **Descripción**: Duplica una cadena de caracteres en una nueva área de memoria.
- **Biblioteca**: <string.h>
- **Errores que maneja**: No maneja errores explícitamente.
- **Usos recomendados**: Creación de copias seguras de cadenas para su manipulación o modificación.
- **Valor de retorno**: Devuelve un puntero a la nueva cadena duplicada o NULL si falla la reserva de memoria.

### [strncmp](strncmp.c)

- **Descripción**: Compara los primeros n caracteres de dos cadenas.
- **Biblioteca**: <string.h>
- **Errores que maneja**: No maneja errores explícitamente.
- **Usos recomendados**: Comparación segura de cadenas para determinar orden o igualdad hasta un número específico de caracteres.
- **Valor de retorno**: Devuelve un valor entero menor, igual o mayor que cero si la primera cadena es menor, igual o mayor que la segunda hasta el número especificado de caracteres.

### [memchr](memchr.c)

- **Descripción**: Busca la primera ocurrencia de un carácter en un bloque de memoria.
- **Biblioteca**: <string.h>
- **Errores que maneja**: No maneja errores explícitamente.
- **Usos recomendados**: Búsqueda de caracteres específicos en bloques de memoria.
- **Valor de retorno**: Devuelve un puntero al carácter encontrado o NULL si no se encuentra.

### [strchr](strchr.c)

- **Descripción**: Busca la primera ocurrencia de un carácter en una cadena.
- **Biblioteca**: <string.h>
- **Errores que maneja**: No maneja errores explícitamente.
- **Usos recomendados**: Búsqueda de caracteres específicos en cadenas.
- **Valor de retorno**: Devuelve un puntero al carácter encontrado o NULL si no se encuentra.

### [strrchr](strrchr.c)

- **Descripción**: Busca la última ocurrencia de un carácter en una cadena.
- **Biblioteca**: <string.h>
- **Errores que maneja**: No maneja errores explícitamente.
- **Usos recomendados**: Búsqueda inversa de caracteres específicos en cadenas.
- **Valor de retorno**: Devuelve un puntero al carácter encontrado o NULL si no se encuentra.

### [strnstr](strnstr.c)

- **Descripción**: Busca una subcadena dentro de otra, limitada a los primeros n caracteres de la cadena principal.
- **Biblioteca**: <string.h>
- **Errores que maneja**: No maneja errores explícitamente.
- **Usos recomendados**: Búsqueda de subcadenas dentro de cadenas con límite de caracteres.
- **Valor de retorno**: Devuelve un puntero al inicio de la subcadena encontrada o NULL si no se encuentra.

### [ft_substr](ft_substr.c)

- **Descripción**: Reserva (con malloc) y devuelve una substring de la string s. La substring empieza desde el índice start y tiene una longitud máxima len.
- **Valor de retorno**: La substring resultante o NULL si falla la reserva de memoria.

### [ft_strjoin](ft_strjoin.c)

- **Descripción**: Reserva (con malloc) y devuelve una nueva string, formada por la concatenación de s1 y s2.
- **Valor de retorno**: La nueva string resultante o NULL si falla la reserva de memoria.

### [ft_strtrim](ft_strtrim.c)

- **Descripción**: Reserva (con malloc) y devuelve una copia de s1 con los caracteres eliminados especificados en set desde el principio y el final de la string.
- **Valor de retorno**: La string recortada o NULL si falla la reserva de memoria.

### [ft_split](ft_split.c)

- **Descripción**: Divide la string s en una array de strings usando el carácter c como delimitador.
- **Valor de retorno**: La array de nuevas strings resultantes o NULL si falla la reserva de memoria.

### [ft_itoa](ft_itoa.c)

- **Descripción**: Convierte el entero n a una string ASCII.
- **Valor de retorno**: La string resultante o NULL si falla la reserva de memoria.

### [ft_strmapi](ft_strmapi.c)

- **Descripción**: Aplica la función f a cada carácter de la string s para crear una nueva string resultante de las aplicaciones sucesivas de f.
- **Valor de retorno**: La string resultante creada por las aplicaciones sucesivas de f.

### [ft_striteri](ft_striteri.c)

- **Descripción**: Aplica la función f a cada carácter de la string s, pasando su índice como primer argumento. Cada carácter se pasa por valor a f para ser modificado si es necesario.
- **Valor de retorno**: No devuelve valor.

### [ft_putchar_fd](ft_putchar_fd.c)

- **Descripción**: Envía el carácter c al file descriptor especificado.
- **Valor de retorno**: No devuelve valor.

### [ft_putstr_fd](ft_putstr_fd.c)

- **Descripción**: Envía la string s al file descriptor especificado.
- **Valor de retorno**: No devuelve valor.

### [ft_putendl_fd](ft_putendl_fd.c)

- **Descripción**: Envía la string s al file descriptor especificado, seguido de un newline.
- **Valor de retorno**: No devuelve valor.

### [ft_putnbr_fd](ft_putnbr_fd.c)

- **Descripción**: Envía el número n al file descriptor especificado.
- **Valor de retorno**: No devuelve valor.
