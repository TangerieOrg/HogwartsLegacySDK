#include "FLinearColor.hpp"
#include "UFunction.hpp"
#include "UGizmoBaseComponent.hpp"
#include "UPrimitiveComponent.hpp"
UGizmoBaseComponent* UGizmoBaseComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoBaseComponent");
    return (UGizmoBaseComponent*)res;
}
void UGizmoBaseComponent::UpdateWorldLocalState(bool bWorldIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState"));
    struct Params_UpdateWorldLocalState {
        bool bWorldIn; // 0x0
    }; // Size: 0x1
    Params_UpdateWorldLocalState params{};
    params.bWorldIn = (bool)bWorldIn;
    ProcessEvent(func, &params);
}
void UGizmoBaseComponent::UpdateHoverState(bool bHoveringIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState"));
    struct Params_UpdateHoverState {
        bool bHoveringIn; // 0x0
    }; // Size: 0x1
    Params_UpdateHoverState params{};
    params.bHoveringIn = (bool)bHoveringIn;
    ProcessEvent(func, &params);
}
