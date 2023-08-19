#include "UBrushStampIndicatorBuilder.hpp"
#include "UInteractiveGizmoBuilder.hpp"
UBrushStampIndicatorBuilder* UBrushStampIndicatorBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.BrushStampIndicatorBuilder");
    return (UBrushStampIndicatorBuilder*)res;
}
