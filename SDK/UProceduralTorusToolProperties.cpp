#include "UProceduralShapeToolProperties.hpp"
#include "UProceduralTorusToolProperties.hpp"
UProceduralTorusToolProperties* UProceduralTorusToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ProceduralTorusToolProperties");
    return (UProceduralTorusToolProperties*)res;
}
