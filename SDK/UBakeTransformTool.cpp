#include "UBakeTransformTool.hpp"
#include "UBakeTransformToolProperties.hpp"
#include "UMultiSelectionTool.hpp"
UBakeTransformTool* UBakeTransformTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.BakeTransformTool");
    return (UBakeTransformTool*)res;
}
