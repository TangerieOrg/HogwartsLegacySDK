#include "UGroupEdgeInsertionProperties.hpp"
#include "UGroupEdgeInsertionTool.hpp"
#include "UMeshOpPreviewWithBackgroundCompute.hpp"
#include "USingleSelectionTool.hpp"
UGroupEdgeInsertionTool* UGroupEdgeInsertionTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.GroupEdgeInsertionTool");
    return (UGroupEdgeInsertionTool*)res;
}
