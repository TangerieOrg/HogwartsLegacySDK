#include "UProceduralRectangleToolProperties.hpp"
#include "UProceduralRoundedRectangleToolProperties.hpp"
UProceduralRoundedRectangleToolProperties* UProceduralRoundedRectangleToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ProceduralRoundedRectangleToolProperties");
    return (UProceduralRoundedRectangleToolProperties*)res;
}
