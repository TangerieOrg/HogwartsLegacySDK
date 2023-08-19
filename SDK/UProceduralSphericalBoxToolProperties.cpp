#include "UProceduralShapeToolProperties.hpp"
#include "UProceduralSphericalBoxToolProperties.hpp"
UProceduralSphericalBoxToolProperties* UProceduralSphericalBoxToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ProceduralSphericalBoxToolProperties");
    return (UProceduralSphericalBoxToolProperties*)res;
}
