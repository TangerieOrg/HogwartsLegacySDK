#include "UProceduralShapeToolProperties.hpp"
#include "UProceduralSphereToolProperties.hpp"
UProceduralSphereToolProperties* UProceduralSphereToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ProceduralSphereToolProperties");
    return (UProceduralSphereToolProperties*)res;
}
