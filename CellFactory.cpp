/*
 * @author JosephJimenez
 * @brief on this File its defined the Blood and Muscle Cells inherit from a CellFactory
 */
#include "Cell.cpp"

class CellFactory{
private:
    Cell *cell;
protected:
    //Product parts
    virtual Function* addFunction() = 0;
    virtual Body* buildBody() = 0;
public:
    virtual Cell* buildWholeCell() = 0;
};

//Defined a blood specific factory, with his specified build
class BloodCellFactory : public CellFactory{
    Function *addFunction(){
        return new BloodFunction();
    }
    Body *buildBody(){
        return new BloodBody();
    }

    Cell *buildWholeCell(){
        Cell *cell = new Cell("BloodCell");
        cell->setFunction(addFunction());
        cell->setBody(buildBody());
        return cell;
    }
};

//Defined a muscle specific factory, with his specified build
class MuscleCellFactory : public CellFactory{
    Function *addFunction(){
        return new MuscleFunction();
    }
    Body *buildBody(){
        return new MuscleBody();
    }

    Cell *buildWholeCell(){
        Cell *cell = new Cell("MuscleCell");
        cell->setFunction(addFunction());
        cell->setBody(buildBody());
        return cell;
    }
};