#include "UMeshSculptToolBase.hpp"
#include "UMeshVertexSculptTool.hpp"
#include "USimpleDynamicMeshComponent.hpp"
#include "UVertexBrushSculptProperties.hpp"
UMeshVertexSculptTool* UMeshVertexSculptTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshVertexSculptTool");
    return (UMeshVertexSculptTool*)res;
}
