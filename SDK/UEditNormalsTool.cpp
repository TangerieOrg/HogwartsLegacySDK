#include "UEditNormalsAdvancedProperties.hpp"
#include "UEditNormalsTool.hpp"
#include "UEditNormalsToolProperties.hpp"
#include "UMeshOpPreviewWithBackgroundCompute.hpp"
#include "UMultiSelectionTool.hpp"
UEditNormalsTool* UEditNormalsTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EditNormalsTool");
    return (UEditNormalsTool*)res;
}
