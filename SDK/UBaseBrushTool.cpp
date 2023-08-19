#include "FBrushStampData.hpp"
#include "UBaseBrushTool.hpp"
#include "UBrushBaseProperties.hpp"
#include "UBrushStampIndicator.hpp"
#include "UMeshSurfacePointTool.hpp"
UBaseBrushTool* UBaseBrushTool::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.BaseBrushTool");
    return (UBaseBrushTool*)res;
}
