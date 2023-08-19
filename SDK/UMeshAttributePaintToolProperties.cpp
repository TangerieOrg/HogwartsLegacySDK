#include "UInteractiveToolPropertySet.hpp"
#include "UMeshAttributePaintToolProperties.hpp"
UMeshAttributePaintToolProperties* UMeshAttributePaintToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshAttributePaintToolProperties");
    return (UMeshAttributePaintToolProperties*)res;
}
