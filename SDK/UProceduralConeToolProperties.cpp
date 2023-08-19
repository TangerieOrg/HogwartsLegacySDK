#include "UProceduralConeToolProperties.hpp"
#include "UProceduralShapeToolProperties.hpp"
UProceduralConeToolProperties* UProceduralConeToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ProceduralConeToolProperties");
    return (UProceduralConeToolProperties*)res;
}
