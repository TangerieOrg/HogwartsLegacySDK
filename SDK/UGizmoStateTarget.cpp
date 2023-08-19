#include "UFunction.hpp"
#include "UGizmoStateTarget.hpp"
#include "UInterface.hpp"
UGizmoStateTarget* UGizmoStateTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoStateTarget");
    return (UGizmoStateTarget*)res;
}
void UGizmoStateTarget::BeginUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/InteractiveToolsFramework.GizmoStateTarget.BeginUpdate"));
    struct Params_BeginUpdate {
    }; // Size: 0x0
    Params_BeginUpdate params{};
    ProcessEvent(func, &params);
}
void UGizmoStateTarget::EndUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/InteractiveToolsFramework.GizmoStateTarget.EndUpdate"));
    struct Params_EndUpdate {
    }; // Size: 0x0
    Params_EndUpdate params{};
    ProcessEvent(func, &params);
}
