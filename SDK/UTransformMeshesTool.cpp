#include "FTransformMeshesTarget.hpp"
#include "UMultiSelectionTool.hpp"
#include "UTransformMeshesTool.hpp"
#include "UTransformMeshesToolProperties.hpp"
UTransformMeshesTool* UTransformMeshesTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.TransformMeshesTool");
    return (UTransformMeshesTool*)res;
}
