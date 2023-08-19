#include "ECombineTargetType.hpp"
#include "UCombineMeshesToolProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UCombineMeshesToolProperties* UCombineMeshesToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.CombineMeshesToolProperties");
    return (UCombineMeshesToolProperties*)res;
}
