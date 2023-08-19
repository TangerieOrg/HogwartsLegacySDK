#include "FVector.hpp"
#include "UBaseCreateFromSelectedHandleSourceProperties.hpp"
#include "UBaseCreateFromSelectedTool.hpp"
#include "UMeshOpPreviewWithBackgroundCompute.hpp"
#include "UMultiSelectionTool.hpp"
#include "UTransformGizmo.hpp"
#include "UTransformInputsToolProperties.hpp"
#include "UTransformProxy.hpp"
UBaseCreateFromSelectedTool* UBaseCreateFromSelectedTool::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.BaseCreateFromSelectedTool");
    return (UBaseCreateFromSelectedTool*)res;
}
