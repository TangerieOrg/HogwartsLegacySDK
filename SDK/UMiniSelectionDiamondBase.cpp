#include "UFunction.hpp"
#include "UMiniSelectionDiamondBase.hpp"
#include "UUserWidget.hpp"
UMiniSelectionDiamondBase* UMiniSelectionDiamondBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MiniSelectionDiamondBase");
    return (UMiniSelectionDiamondBase*)res;
}
void UMiniSelectionDiamondBase::SetState(bool IsActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MiniSelectionDiamondBase.SetState"));
    struct Params_SetState {
        bool IsActive; // 0x0
    }; // Size: 0x1
    Params_SetState params{};
    params.IsActive = (bool)IsActive;
    ProcessEvent(func, &params);
}
void UMiniSelectionDiamondBase::OnSetState(int32_t NewState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MiniSelectionDiamondBase.OnSetState"));
    struct Params_OnSetState {
        int32_t NewState; // 0x0
    }; // Size: 0x4
    Params_OnSetState params{};
    params.NewState = (int32_t)NewState;
    ProcessEvent(func, &params);
}
