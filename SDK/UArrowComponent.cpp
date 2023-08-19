#include "FColor.hpp"
#include "FLinearColor.hpp"
#include "UArrowComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
UArrowComponent* UArrowComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ArrowComponent");
    return (UArrowComponent*)res;
}
void UArrowComponent::SetArrowColor(FLinearColor NewColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ArrowComponent.SetArrowColor"));
    struct Params_SetArrowColor {
        FLinearColor NewColor; // 0x0
    }; // Size: 0x10
    Params_SetArrowColor params{};
    params.NewColor = (FLinearColor)NewColor;
    ProcessEvent(func, &params);
}
