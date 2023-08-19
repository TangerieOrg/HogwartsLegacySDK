#include "UVectorField.hpp"
#include "UVectorFieldStatic.hpp"
UVectorFieldStatic* UVectorFieldStatic::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.VectorFieldStatic");
    return (UVectorFieldStatic*)res;
}
