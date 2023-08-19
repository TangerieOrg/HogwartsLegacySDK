#include "UMaterialInterface.hpp"
#include "UObject.hpp"
#include "UPreviewMesh.hpp"
#include "UTriangleSetComponent.hpp"
#include "UUVLayoutPreview.hpp"
#include "UUVLayoutPreviewProperties.hpp"
UUVLayoutPreview* UUVLayoutPreview::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.UVLayoutPreview");
    return (UUVLayoutPreview*)res;
}
