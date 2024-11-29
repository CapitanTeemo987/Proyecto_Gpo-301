# Proyecto_Gpo-301

# League of Legends Champions - Clases en C++

## Descripción del Proyecto
Este proyecto consiste en simular campeones de League of Legends a través de clases en C++. Se han desarrollado tres clases para tres tipos de campeones: **Mid**, **Top** y **ADC**. Cada clase representa un tipo de campeón con atributos y métodos específicos que permiten simular algunas de sus características.

Este proyecto ayuda a comprender cómo estructurar clases, inicializar objetos a travez de constructores y llamar métodos en C++.

## Estructura del Programa
El programa define tres clases en C++: `Mid`, `Top` y `ADC`. Cada clase cuenta con:
- **Atributos Generales**: Estos incluyen el `nombre` del campeón, su `nivel` y su `poder`.
- **Atributo Especial**: Un atributo único para cada clase:
  - `Mid`: `mana`, que representa la cantidad de energía mágica.
  - `Top`: `resistencia`, que representa la capacidad de aguantar daño.
  - `ADC`: `critico`, que representa la probabilidad de realizar golpes críticos.
- **Métodos**:
  - `mostrarInfo()`: Muestra los atributos del campeón, incluyendo el especial.
  - `mejorarNivel()`: Incrementa el nivel del campeón.
  - **Nuevos Métodos** (definidos en `campeon.h`):
    - `set_nombre()`: Asigna un nombre al campeón.
    - `set_nivel()`: Modifica el nivel del campeón.
    - `set_poder()`: Establece el poder del campeón.
    - `set_Habilidad()`: Asigna un objeto de tipo `Habilidades` al campeón.
    - `get_nombre()`: Devuelve el nombre del campeón.
    - `get_nivel()`: Devuelve el nivel del campeón.
    - `get_poder()`: Devuelve el poder del campeón.
    - `get_habilidad()`: Retorna el objeto `Habilidades` del campeón.
    - `get_tipo()`: Devuelve el tipo del campeón (Mid, Top, ADC).

### 2. **Equipos** (`equipo.h`)
La clase `Equipo` permite crear equipos de hasta 5 campeones. Cada equipo tiene un nombre y puede agregar campeones hasta alcanzar su capacidad máxima.
  
#### Métodos de Equipo:
- `set_nombre()`: Asigna el nombre del equipo.
- `get_nombre()`: Retorna el nombre del equipo.
- `AgregaCampeon()`: Agrega un campeón al equipo, si hay espacio disponible.
- `MostrarEquipo()`: Muestra los campeones en el equipo.

### 3. **Habilidades** (`habilidades.h`)
La clase `Habilidades` permite definir las habilidades de los campeones, incluyendo el nombre de la habilidad, su costo de mana y el daño que produce.

#### Métodos de Habilidades:
- `set_nombre()`: Asigna el nombre de la habilidad.
- `set_danio()`: Establece el daño de la habilidad.
- `set_costo_mana()`: Define el costo de mana.
- `get_nombre()`, `get_costo_mana()`, `get_danio()`: Retornan los valores respectivos.

### 4. **Menú Principal**
El programa cuenta con un menú interactivo que permite al usuario realizar distintas acciones. Estas son las opciones disponibles:
1. Crear equipo.
2. Agregar campeón Mid.
3. Agregar campeón Top.
4. Agregar campeón ADC.
5. Mostrar equipo.
6. Crear equipo de ejemplo.
7. Mejorar nivel de los campeones.
8. Eliminar campeón.
9. Salir.


## Funcionalidad del Programa
El programa crea un objeto para cada clase y permite al usuario interactuar con los siguientes métodos:
1. **Mostrar Información**: Imprime en consola los atributos del campeón, mostrando una descripción general.
2. **Mejorar Nivel**: Aumenta el nivel del campeón en uno y muestra el nuevo nivel en la consola.
3. **Crear equipo**: Crea un vector de 5 espacios en el que se pueden agregar campeones para crear un equipo.
4. **Habilidades**: Incluyen habilidades únicas que tienen cierto costo de maná y el daño que realiza.

## Ejemplo de Uso
Cuando el usuario ejecuta el programa, se crearán tres campeones: un campeón de rol Mid, uno de rol Top y uno de rol ADC. A continuación, se mostrarán los atributos y se mejorará el nivel de cada campeón.

### Salida Esperada
```plaintext
Campeón Mid: Ahri, Nivel: 5, Poder: 150, Habilidad: Orbe de fuego, Mana: 300
Ahri ha subido al nivel 6
Campeón Top: Darius, Nivel: 7, Poder: 200, Habilidad: No registrada, Resistencia: 400
Darius ha subido al nivel 8
Campeón ADC: Jinx, Nivel: 3, Poder: 120, Habilidad: No registrada, Crítico: 50
Jinx ha subido al nivel 4

Equipo T1:
integrante 1: Ahri
integrante 2: Darius
integrante 3: Jinx
`````
## Referencias
-Programación ATS. (2016, August 15). 82. Programación en C++ || Punteros || Declaración de Punteros [Video]. YouTube. https://www.youtube.com/watch?v=_pcfFMFs9-g
-Devs’ Den. (2017, March 29). 26. Introducción a los punteros - C++ de 0 a Experto! [Video]. YouTube. https://www.youtube.com/watch?v=R1S8FqJ4AKs
-González, J. D. M. (2020, May 14). Punteros. https://www.programarya.com/Cursos/C++/Estructuras-de-Datos/Punteros

