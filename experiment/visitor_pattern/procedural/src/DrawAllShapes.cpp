#include "..\include\DrawAllShapes.h"
#include "..\include\Circle.h"
#include "..\include\Square.h"
#include "..\include\DrawCircle.h"
#include "..\include\DrawSquare.h"

void drawAllShapes(std::vector<std::unique_ptr<Shape>> const& shapes){
    for (auto const& shape : shapes){
        switch (shape -> getType())
        {
        case circle:
            draw(static_cast<Circle const&>(*shape));
            break;
        case square:
            draw(static_cast<Square const&>(*shape));
            break;
        default:
            break;
        }
    }
}