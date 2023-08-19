#include "UEdgeLoopInsertionProperties.hpp"
#include "UEdgeLoopInsertionTool.hpp"
#include "UMeshOpPreviewWithBackgroundCompute.hpp"
#include "USingleSelectionTool.hpp"
UEdgeLoopInsertionTool* UEdgeLoopInsertionTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EdgeLoopInsertionTool");
    return (UEdgeLoopInsertionTool*)res;
}
