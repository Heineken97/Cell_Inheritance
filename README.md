# Cell Inheritance Project

Este proyecto implementa un ejemplo del patrón de diseño Abstract Factory en C++. El objetivo es demostrar cómo se pueden crear diferentes tipos de células (sanguíneas y musculares) utilizando una fábrica abstracta.

## Estructura del Proyecto

El proyecto está compuesto por las siguientes clases:

- **Function**: Clase base que representa la función de una célula.
  - **BloodFunction**: Clase derivada que representa la función de una célula sanguínea.
  - **MuscleFunction**: Clase derivada que representa la función de una célula muscular.

- **Body**: Clase base que representa el cuerpo de una célula.
  - **BloodBody**: Clase derivada que representa el cuerpo de una célula sanguínea.
  - **MuscleBody**: Clase derivada que representa el cuerpo de una célula muscular.

- **Cell**: Clase que representa una célula, compuesta por una función y un cuerpo.

- **CellFactory**: Clase abstracta que define la interfaz para crear células.
  - **BloodCellFactory**: Clase derivada que implementa la creación de células sanguíneas.
  - **MuscleCellFactory**: Clase derivada que implementa la creación de células musculares.

## Archivos

- `Cell.cpp`: Define las clases `Function`, `BloodFunction`, `MuscleFunction`, `Body`, `BloodBody`, `MuscleBody` y `Cell`.
- `CellFactory.cpp`: Define la clase abstracta `CellFactory` y las clases derivadas `BloodCellFactory` y `MuscleCellFactory`.
- `main.cpp`: Contiene el punto de entrada del programa y demuestra el uso de las fábricas para crear células.

## Uso

Para compilar y ejecutar el programa, utiliza los siguientes comandos:

```sh
g++ -o cell_factory main.cpp
./cell_factory

## Ejemplo de salida
Cell: BloodCell
Function: BloodFunction
Body: BloodBody Will live[days]: 360

Este proyecto es un ejemplo del patrón de diseño Abstract Factory, donde el cliente interactúa con la interfaz de la fábrica para crear células sanguíneas y musculares llamando a sus respectivas fábricas.
