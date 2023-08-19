#include "UConvertToPolygonsTool.hpp"
#include "UConvertToPolygonsToolProperties.hpp"
#include "UPreviewMesh.hpp"
#include "USingleSelectionTool.hpp"
UConvertToPolygonsTool* UConvertToPolygonsTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ConvertToPolygonsTool");
    return (UConvertToPolygonsTool*)res;
}
