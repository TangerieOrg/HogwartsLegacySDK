#include "UMaterialInterface.hpp"
#include "UMeshOpPreviewWithBackgroundCompute.hpp"
#include "UObject.hpp"
#include "UPreviewMesh.hpp"
UMeshOpPreviewWithBackgroundCompute* UMeshOpPreviewWithBackgroundCompute::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.MeshOpPreviewWithBackgroundCompute");
    return (UMeshOpPreviewWithBackgroundCompute*)res;
}
