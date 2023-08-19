#include "UProjectToTargetTool.hpp"
#include "URemeshMeshTool.hpp"
UProjectToTargetTool* UProjectToTargetTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ProjectToTargetTool");
    return (UProjectToTargetTool*)res;
}
