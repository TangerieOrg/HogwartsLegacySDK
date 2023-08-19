#include "UBaseBrushTool.hpp"
#include "UDynamicMeshBrushTool.hpp"
#include "UPreviewMesh.hpp"
UDynamicMeshBrushTool* UDynamicMeshBrushTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DynamicMeshBrushTool");
    return (UDynamicMeshBrushTool*)res;
}
