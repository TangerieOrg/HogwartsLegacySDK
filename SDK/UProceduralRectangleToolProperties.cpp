#include "UProceduralRectangleToolProperties.hpp"
#include "UProceduralShapeToolProperties.hpp"
UProceduralRectangleToolProperties* UProceduralRectangleToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ProceduralRectangleToolProperties");
    return (UProceduralRectangleToolProperties*)res;
}
