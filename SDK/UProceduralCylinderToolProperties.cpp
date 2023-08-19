#include "UProceduralCylinderToolProperties.hpp"
#include "UProceduralShapeToolProperties.hpp"
UProceduralCylinderToolProperties* UProceduralCylinderToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ProceduralCylinderToolProperties");
    return (UProceduralCylinderToolProperties*)res;
}
