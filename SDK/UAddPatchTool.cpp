#include "UAddPatchTool.hpp"
#include "UAddPatchToolProperties.hpp"
#include "UNewMeshMaterialProperties.hpp"
#include "UPreviewMesh.hpp"
#include "USingleClickTool.hpp"
UAddPatchTool* UAddPatchTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AddPatchTool");
    return (UAddPatchTool*)res;
}
