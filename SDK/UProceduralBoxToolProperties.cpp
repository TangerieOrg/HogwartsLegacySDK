#include "UProceduralBoxToolProperties.hpp"
#include "UProceduralRectangleToolProperties.hpp"
UProceduralBoxToolProperties* UProceduralBoxToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ProceduralBoxToolProperties");
    return (UProceduralBoxToolProperties*)res;
}
