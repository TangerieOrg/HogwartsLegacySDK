#include "UBaseMeshProcessingTool.hpp"
#include "UMeshOpPreviewWithBackgroundCompute.hpp"
#include "USingleSelectionTool.hpp"
UBaseMeshProcessingTool* UBaseMeshProcessingTool::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.BaseMeshProcessingTool");
    return (UBaseMeshProcessingTool*)res;
}
