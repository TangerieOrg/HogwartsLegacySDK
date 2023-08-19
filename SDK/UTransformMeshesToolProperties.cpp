#include "ETransformMeshesSnapDragRotationMode.hpp"
#include "ETransformMeshesSnapDragSource.hpp"
#include "ETransformMeshesTransformMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UTransformMeshesToolProperties.hpp"
UTransformMeshesToolProperties* UTransformMeshesToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.TransformMeshesToolProperties");
    return (UTransformMeshesToolProperties*)res;
}
