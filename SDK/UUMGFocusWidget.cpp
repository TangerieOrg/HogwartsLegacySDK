#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "EUMGInputAxis.hpp"
#include "FUMGConsolidatedAxisInputData.hpp"
#include "UFunction.hpp"
#include "UUMGFocusWidget.hpp"
#include "UUserWidget.hpp"
UUMGFocusWidget* UUMGFocusWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/UMGFocus.UMGFocusWidget");
    return (UUMGFocusWidget*)res;
}
bool UUMGFocusWidget::HasFocus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGFocusWidget.HasFocus"));
    struct Params_HasFocus {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasFocus params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUMGFocusWidget::UnregisterUMGInputAxis(EUMGInputAxis InputAxis) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGFocusWidget.UnregisterUMGInputAxis"));
    struct Params_UnregisterUMGInputAxis {
        EUMGInputAxis InputAxis; // 0x0
    }; // Size: 0x1
    Params_UnregisterUMGInputAxis params{};
    params.InputAxis = (EUMGInputAxis)InputAxis;
    ProcessEvent(func, &params);
}
void UUMGFocusWidget::UnregisterUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGFocusWidget.UnregisterUMGInputAction"));
    struct Params_UnregisterUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
    }; // Size: 0x2
    Params_UnregisterUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    ProcessEvent(func, &params);
}
void UUMGFocusWidget::RegisterUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGFocusWidget.RegisterUMGInputAction"));
    struct Params_RegisterUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
    }; // Size: 0x2
    Params_RegisterUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    ProcessEvent(func, &params);
}
void UUMGFocusWidget::UnregisterAllUMGInputActions(EInputEvent InputEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGFocusWidget.UnregisterAllUMGInputActions"));
    struct Params_UnregisterAllUMGInputActions {
        EInputEvent InputEvent; // 0x0
    }; // Size: 0x1
    Params_UnregisterAllUMGInputActions params{};
    params.InputEvent = (EInputEvent)InputEvent;
    ProcessEvent(func, &params);
}
void UUMGFocusWidget::UnregisterAllUMGInputAxis() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGFocusWidget.UnregisterAllUMGInputAxis"));
    struct Params_UnregisterAllUMGInputAxis {
    }; // Size: 0x0
    Params_UnregisterAllUMGInputAxis params{};
    ProcessEvent(func, &params);
}
void UUMGFocusWidget::RegisterAllUMGInputAxis() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGFocusWidget.RegisterAllUMGInputAxis"));
    struct Params_RegisterAllUMGInputAxis {
    }; // Size: 0x0
    Params_RegisterAllUMGInputAxis params{};
    ProcessEvent(func, &params);
}
void UUMGFocusWidget::RegisterUMGInputAxis(EUMGInputAxis InputAxis) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGFocusWidget.RegisterUMGInputAxis"));
    struct Params_RegisterUMGInputAxis {
        EUMGInputAxis InputAxis; // 0x0
    }; // Size: 0x1
    Params_RegisterUMGInputAxis params{};
    params.InputAxis = (EUMGInputAxis)InputAxis;
    ProcessEvent(func, &params);
}
void UUMGFocusWidget::RegisterAllUMGInputActions(EInputEvent InputEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGFocusWidget.RegisterAllUMGInputActions"));
    struct Params_RegisterAllUMGInputActions {
        EInputEvent InputEvent; // 0x0
    }; // Size: 0x1
    Params_RegisterAllUMGInputActions params{};
    params.InputEvent = (EInputEvent)InputEvent;
    ProcessEvent(func, &params);
}
void UUMGFocusWidget::LoseFocus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGFocusWidget.LoseFocus"));
    struct Params_LoseFocus {
    }; // Size: 0x0
    Params_LoseFocus params{};
    ProcessEvent(func, &params);
}
bool UUMGFocusWidget::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGFocusWidget.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUMGFocusWidget::BlueprintFocusLost() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGFocusWidget.BlueprintFocusLost"));
    struct Params_BlueprintFocusLost {
    }; // Size: 0x0
    Params_BlueprintFocusLost params{};
    ProcessEvent(func, &params);
}
void UUMGFocusWidget::BlueprintFocusAcquired() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGFocusWidget.BlueprintFocusAcquired"));
    struct Params_BlueprintFocusAcquired {
    }; // Size: 0x0
    Params_BlueprintFocusAcquired params{};
    ProcessEvent(func, &params);
}
void UUMGFocusWidget::BlueprintConsolidatedUMGInputAxis(FUMGConsolidatedAxisInputData& AxisInputData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGFocusWidget.BlueprintConsolidatedUMGInputAxis"));
    struct Params_BlueprintConsolidatedUMGInputAxis {
        FUMGConsolidatedAxisInputData AxisInputData; // 0x0
    }; // Size: 0x30
    Params_BlueprintConsolidatedUMGInputAxis params{};
    params.AxisInputData = (FUMGConsolidatedAxisInputData)AxisInputData;
    ProcessEvent(func, &params);
    AxisInputData = params.AxisInputData;
}
void UUMGFocusWidget::AcquireFocus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGFocusWidget.AcquireFocus"));
    struct Params_AcquireFocus {
    }; // Size: 0x0
    Params_AcquireFocus params{};
    ProcessEvent(func, &params);
}
