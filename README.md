# MemoriaDinamica
Clase personalizada para el manejo de arreglos dinámicos en c++
Esta clase fue inicialmente usada para el manejo de integers, pero con el uso de la función ***template***, que nos permite manejar un tipo de dato genérico, es posible utilizar esta clase con todos los tipos de datos. El manejo de dinámico de la memoria permite definir arreglos sin especificar desde un principio la cantidad de elementos que contendrá, y así mismo agilizar el manejo de la memoria dinámica básica.

# Descripción de la clase:

- ***Arreglo()***
- - la clase solo tiene un constructor para el cual no se dan parámetros, este constructor inicializa un arreglo con ningún elemento pero con una capacidad inicial de 4 
- ***.agregar(elemento)***
- - el método agregar, agrega un elemento, cuyo tipo de dato sea IGUAL al previo declarado al inicializar el arreglo.
- ***.eliminar(posicion)***
- - el método eliminar, elimina el elemento con índice *posicion* y "recorre" los elementos que estaban adelante de dicha posicion.
- ***.consultar(posicion)***
- - el método consultar, nos permite consultar el elemento en el índice *posicion*.
- ***.obtenerTamano()***
- - el método obtenerTamano da como retorno el tamaño del arreglo, es decir, la cantidad de elementos con los que actualmente cuenta el arreglo.
- ***.obtenerCapacidad()***
- - el método obtenerCapacidad da como retorno la capacidad del arreglo, es decir, el espacio reservado en la memoria.
En este mismo repocitorio se encuentra el archivo *Prueba.cpp* en donde se puede visualizar ejemplos de uso de esta clase y los métodos.

### Operadores

- ***[indice]***
- - se retornará el valor del elemento en índice, se usa de la siguiente manera: ***NombreArreglo[indice]*** esto SOLO se puede usar para retornar los valores en las posiciones indicadas NO SE PUEDE UTILIZAR para efectuar cambios en el elemento de dicho indice.
- ***==***
- - se retorna un valor boleano, en donde se evalua si los arreglos comparados son iguales o no, se utiliza de la siguiente manera: ***Arr1 == Arr2*** 
- ***!=***
- - se retornará un valor boleano contrario a lo que sucedería en ***==***

# Instalación o uso

Para el uso de esta clase, basta con descargar el archivo *Arreglo.h* y colocarlo en la carpeta en donde se utilizará. Una vez hecho esto, con colocar *#include "Arreglo.h"* se podrá utilizar la clase.

Por otra parte, es posible utilizar esta clase a modo de libreria, esto se logra encontrando la carpeta en donde se encuentran las librerías de nuestro compilador, y en esta carpeta, agregar el archivo *Arreglo.h*. Una vez realizado esto, será posible usar esta clase en cualquier programa sin la necesidad de incluir el archivo en cada carpeta. (se utiliza *#include <Arreglo.h>* al inicio de cada programa en donde se utiliza)

# Referencias:

Roberts, E., & Zelenski, J. (2014). Programming Abstractions in C++. Pearson.

Exceptions - C++ Tutorials. (2021). Cplusplus.com. https://www.cplusplus.com/doc/tutorial/exceptions/

Templates - C++ Tutorials. (2021). Cplusplus.com. https://www.cplusplus.com/doc/oldtutorial/templates/

# TODOs:

- Es posible experimentar con operadores personalizados para la clase, esto se hace por medio de una sobrecarga de operadores, consultar más de esto en: https://www.cplusplus.com/doc/oldtutorial/classes2/ **ACTUALIZACION** YA SE UTILIZÓ esto para TRES OPERADORES básicos (y todavía falta refinar el operador[]) ES POSIBLE utilizar más operadores, como ***=*** , ***+*** , etc.
- Agregar más constructores para diferentes escenarios, por ejemplo, comenzar un arreglo inicializandolo con el valor de otro arreglo previamente hecho.
- Dependiendo del tipo de dato que se pueda introducir (se necesita hacer un análisis e investigación de como manejar esto), agregar métodos como sort o inclusive una busqueda binaria (con un arreglo ya ordenado).
- Métodos para comparar dos Arreglos, si son iguales o no, encontrar diferencias, multiplicar matrices, etc.
