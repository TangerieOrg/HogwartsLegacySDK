#include "UAddPrimitiveTool.hpp"
#include "ULastActorInfo.hpp"
#include "UNewMeshMaterialProperties.hpp"
#include "UPreviewMesh.hpp"
#include "UProceduralShapeToolProperties.hpp"
#include "USingleClickTool.hpp"
UAddPrimitiveTool* UAddPrimitiveTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AddPrimitiveTool");
    return (UAddPrimitiveTool*)res;
}
