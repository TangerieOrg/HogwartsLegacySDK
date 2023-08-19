#include "UDynamicMeshBrushTool.hpp"
#include "UPreviewGeometry.hpp"
#include "USeamSculptTool.hpp"
#include "USeamSculptToolProperties.hpp"
USeamSculptTool* USeamSculptTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SeamSculptTool");
    return (USeamSculptTool*)res;
}
