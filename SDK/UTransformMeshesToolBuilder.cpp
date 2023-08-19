#include "UInteractiveToolBuilder.hpp"
#include "UTransformMeshesToolBuilder.hpp"
UTransformMeshesToolBuilder* UTransformMeshesToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.TransformMeshesToolBuilder");
    return (UTransformMeshesToolBuilder*)res;
}
