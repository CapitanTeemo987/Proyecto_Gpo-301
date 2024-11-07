# Proyecto_Gpo-301

# League of Legends Champions - Clases en C++

## Descripción del Proyecto
Este proyecto consiste en simular campeones de League of Legends a través de clases en C++. Se han desarrollado tres clases para tres tipos de campeones: **Mid**, **Top** y **ADC**. Cada clase representa un tipo de campeón con atributos y métodos específicos que permiten simular algunas de sus características.

Este proyecto ayuda a comprender cómo estructurar clases, inicializar objetos a travez de constructores y llamar métodos en C++.

## Problema a Resolver
El objetivo es crear clases aisladas para tres tipos de campeones de League of Legends (Mid, Top y ADC), cada una con atributos y métodos que representen características y habilidades típicas de estos roles en el juego. A través de la creación de objetos, el usuario podrá visualizar la información de cada campeón y mejorar su nivel en el juego.

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

## Funcionalidad del Programa
El programa crea un objeto para cada clase y permite al usuario interactuar con los siguientes métodos:
1. **Mostrar Información**: Imprime en consola los atributos del campeón, mostrando una descripción general.
2. **Mejorar Nivel**: Aumenta el nivel del campeón en uno y muestra el nuevo nivel en la consola.

## Ejemplo de Uso
Cuando el usuario ejecuta el programa, se crearán tres campeones: un campeón de rol Mid, uno de rol Top y uno de rol ADC. A continuación, se mostrarán los atributos y se mejorará el nivel de cada campeón.

### Salida Esperada
```plaintext
Campeón Mid: Ahri, Nivel: 5, Poder: 150, Mana: 300
Ahri ha subido al nivel 6
Campeón Top: Darius, Nivel: 7, Poder: 200, Resistencia: 400
Darius ha subido al nivel 8
Campeón ADC: Jinx, Nivel: 3, Poder: 120, Crítico: 50
Jinx ha subido al nivel 4
