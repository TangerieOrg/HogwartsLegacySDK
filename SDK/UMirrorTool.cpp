#include "UConstructionPlaneMechanic.hpp"
#include "UDynamicMeshReplacementChangeTarget.hpp"
#include "UMeshOpPreviewWithBackgroundCompute.hpp"
#include "UMirrorTool.hpp"
#include "UMirrorToolActionPropertySet.hpp"
#include "UMirrorToolProperties.hpp"
#include "UMultiSelectionTool.hpp"
UMirrorTool* UMirrorTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MirrorTool");
    return (UMirrorTool*)res;
}
