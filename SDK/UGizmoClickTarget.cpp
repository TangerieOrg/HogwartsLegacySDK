#include "UFunction.hpp"
#include "UGizmoClickTarget.hpp"
#include "UInterface.hpp"
UGizmoClickTarget* UGizmoClickTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoClickTarget");
    return (UGizmoClickTarget*)res;
}
void UGizmoClickTarget::UpdateHoverState(bool bHovering) {
    static auto func = (UFunction*)(find_uobject("Function /Script/InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState"));
    struct Params_UpdateHoverState {
        bool bHovering; // 0x0
    }; // Size: 0x1
    Params_UpdateHoverState params{};
    params.bHovering = (bool)bHovering;
    ProcessEvent(func, &params);
}
