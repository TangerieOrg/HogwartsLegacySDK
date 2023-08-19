#include "ESetMeshMaterialMode.hpp"
#include "UExistingMeshMaterialProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
UExistingMeshMaterialProperties* UExistingMeshMaterialProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ExistingMeshMaterialProperties");
    return (UExistingMeshMaterialProperties*)res;
}
