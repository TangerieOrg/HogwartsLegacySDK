#include "UProceduralDiscToolProperties.hpp"
#include "UProceduralShapeToolProperties.hpp"
UProceduralDiscToolProperties* UProceduralDiscToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ProceduralDiscToolProperties");
    return (UProceduralDiscToolProperties*)res;
}
