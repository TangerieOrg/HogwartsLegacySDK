#include "EOffsetMeshToolOffsetType.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UOffsetMeshToolProperties.hpp"
UOffsetMeshToolProperties* UOffsetMeshToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.OffsetMeshToolProperties");
    return (UOffsetMeshToolProperties*)res;
}
