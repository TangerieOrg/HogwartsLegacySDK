#include "UObject.hpp"
#include "UPreviewMesh.hpp"
#include "USimpleDynamicMeshComponent.hpp"
UPreviewMesh* UPreviewMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.PreviewMesh");
    return (UPreviewMesh*)res;
}
