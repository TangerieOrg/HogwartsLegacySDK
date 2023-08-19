#include "UDynamicMeshBrushTool.hpp"
#include "UMeshAttributePaintTool.hpp"
#include "UMeshAttributePaintToolProperties.hpp"
UMeshAttributePaintTool* UMeshAttributePaintTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshAttributePaintTool");
    return (UMeshAttributePaintTool*)res;
}
