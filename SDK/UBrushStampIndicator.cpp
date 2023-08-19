#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UBrushStampIndicator.hpp"
#include "UInteractiveGizmo.hpp"
#include "UPrimitiveComponent.hpp"
UBrushStampIndicator* UBrushStampIndicator::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.BrushStampIndicator");
    return (UBrushStampIndicator*)res;
}
