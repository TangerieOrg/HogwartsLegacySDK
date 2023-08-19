#include "FBox.hpp"
#include "UObject.hpp"
#include "UVectorField.hpp"
UVectorField* UVectorField::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.VectorField");
    return (UVectorField*)res;
}
