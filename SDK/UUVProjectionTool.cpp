#include "UExistingMeshMaterialProperties.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMeshOpPreviewWithBackgroundCompute.hpp"
#include "UMultiSelectionTool.hpp"
#include "UTransformGizmo.hpp"
#include "UTransformProxy.hpp"
#include "UUVProjectionAdvancedProperties.hpp"
#include "UUVProjectionTool.hpp"
#include "UUVProjectionToolProperties.hpp"
UUVProjectionTool* UUVProjectionTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.UVProjectionTool");
    return (UUVProjectionTool*)res;
}
