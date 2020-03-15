/*
 * @author JosephJimenez
 * @brief this is the example of Abstract Factory,
 * the client interacts with the factory interface,
 * on this case the client can create a Blood && Muscle cell's
 * by calling their factory.
 *
 */
#include "CellFactory.cpp"
#define  MUSCLE_CELL 1
#define  BLOOD_CELL 1

int main() {
    #ifdef BLOOD_CELL
        CellFactory* factory = new BloodCellFactory;
    #elif MUSCLE_CELL
        CellFactory* factory= new MuscleCellFactory;
    #endif

    Cell *cell =factory-> buildWholeCell();
    cell->printDetail();
    return 0;
}