#include "AActor.hpp"
#include "AUMGInputManager.hpp"
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "EUMGInputAxis.hpp"
#include "FUMGInputListener.hpp"
#include "UFunction.hpp"
void AUMGInputManager::UnregisterInputAction(EUMGInputAction InputAction, EInputEvent InputEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGInputManager.UnregisterInputAction"));
    struct Params_UnregisterInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
    }; // Size: 0x2
    Params_UnregisterInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    ProcessEvent(func, &params);
}
FString AUMGInputManager::GetInputActionEnumValueAsString(EUMGInputAction InputAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGInputManager.GetInputActionEnumValueAsString"));
    struct Params_GetInputActionEnumValueAsString {
        EUMGInputAction InputAction; // 0x0
        char pad_1[0x7];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetInputActionEnumValueAsString params{};
    params.InputAction = (EUMGInputAction)InputAction;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
AUMGInputManager* AUMGInputManager::StaticClass() {
    static auto res = find_uobject("Class /Script/UMGFocus.UMGInputManager");
    return (AUMGInputManager*)res;
}
void AUMGInputManager::UnregisterUMGInputAxis(FUMGInputListener& InputListener, EUMGInputAxis InputAxis) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGInputManager.UnregisterUMGInputAxis"));
    struct Params_UnregisterUMGInputAxis {
        FUMGInputListener InputListener; // 0x0
        EUMGInputAxis InputAxis; // 0x10
    }; // Size: 0x11
    Params_UnregisterUMGInputAxis params{};
    params.InputListener = (FUMGInputListener)InputListener;
    params.InputAxis = (EUMGInputAxis)InputAxis;
    ProcessEvent(func, &params);
    InputListener = params.InputListener;
}
void AUMGInputManager::UnregisterUMGInputListener(FUMGInputListener& InputListener) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGInputManager.UnregisterUMGInputListener"));
    struct Params_UnregisterUMGInputListener {
        FUMGInputListener InputListener; // 0x0
    }; // Size: 0x10
    Params_UnregisterUMGInputListener params{};
    params.InputListener = (FUMGInputListener)InputListener;
    ProcessEvent(func, &params);
    InputListener = params.InputListener;
}
void AUMGInputManager::UnregisterUMGInputAction(FUMGInputListener& InputListener, EUMGInputAction InputAction, EInputEvent InputEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGInputManager.UnregisterUMGInputAction"));
    struct Params_UnregisterUMGInputAction {
        FUMGInputListener InputListener; // 0x0
        EUMGInputAction InputAction; // 0x10
        EInputEvent InputEvent; // 0x11
    }; // Size: 0x12
    Params_UnregisterUMGInputAction params{};
    params.InputListener = (FUMGInputListener)InputListener;
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    ProcessEvent(func, &params);
    InputListener = params.InputListener;
}
void AUMGInputManager::UnregisterInputAxis(EUMGInputAxis InputAxis) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGInputManager.UnregisterInputAxis"));
    struct Params_UnregisterInputAxis {
        EUMGInputAxis InputAxis; // 0x0
    }; // Size: 0x1
    Params_UnregisterInputAxis params{};
    params.InputAxis = (EUMGInputAxis)InputAxis;
    ProcessEvent(func, &params);
}
void AUMGInputManager::RegisterUMGInputAction(FUMGInputListener& InputListener, EUMGInputAction InputAction, EInputEvent InputEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGInputManager.RegisterUMGInputAction"));
    struct Params_RegisterUMGInputAction {
        FUMGInputListener InputListener; // 0x0
        EUMGInputAction InputAction; // 0x10
        EInputEvent InputEvent; // 0x11
    }; // Size: 0x12
    Params_RegisterUMGInputAction params{};
    params.InputListener = (FUMGInputListener)InputListener;
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    ProcessEvent(func, &params);
    InputListener = params.InputListener;
}
void AUMGInputManager::RegisterUMGInputAxis(FUMGInputListener& InputListener, EUMGInputAxis InputAxis) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGInputManager.RegisterUMGInputAxis"));
    struct Params_RegisterUMGInputAxis {
        FUMGInputListener InputListener; // 0x0
        EUMGInputAxis InputAxis; // 0x10
    }; // Size: 0x11
    Params_RegisterUMGInputAxis params{};
    params.InputListener = (FUMGInputListener)InputListener;
    params.InputAxis = (EUMGInputAxis)InputAxis;
    ProcessEvent(func, &params);
    InputListener = params.InputListener;
}
void AUMGInputManager::RegisterInputAxis(EUMGInputAxis InputAxis) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGInputManager.RegisterInputAxis"));
    struct Params_RegisterInputAxis {
        EUMGInputAxis InputAxis; // 0x0
    }; // Size: 0x1
    Params_RegisterInputAxis params{};
    params.InputAxis = (EUMGInputAxis)InputAxis;
    ProcessEvent(func, &params);
}
void AUMGInputManager::RegisterInputAction(EUMGInputAction InputAction, EInputEvent InputEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGInputManager.RegisterInputAction"));
    struct Params_RegisterInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
    }; // Size: 0x2
    Params_RegisterInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    ProcessEvent(func, &params);
}
void AUMGInputManager::OnInputAxis(EUMGInputAxis InputAxis, float AxisValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGInputManager.OnInputAxis"));
    struct Params_OnInputAxis {
        EUMGInputAxis InputAxis; // 0x0
        char pad_1[0x3];
        float AxisValue; // 0x4
    }; // Size: 0x8
    Params_OnInputAxis params{};
    params.InputAxis = (EUMGInputAxis)InputAxis;
    params.AxisValue = (float)AxisValue;
    ProcessEvent(func, &params);
}
void AUMGInputManager::OnInputAction(EUMGInputAction InputAction, EInputEvent InputEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGInputManager.OnInputAction"));
    struct Params_OnInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
    }; // Size: 0x2
    Params_OnInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    ProcessEvent(func, &params);
}
FString AUMGInputManager::GetInputAxisEnumValueAsString(EUMGInputAxis InputAxis) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGInputManager.GetInputAxisEnumValueAsString"));
    struct Params_GetInputAxisEnumValueAsString {
        EUMGInputAxis InputAxis; // 0x0
        char pad_1[0x7];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetInputAxisEnumValueAsString params{};
    params.InputAxis = (EUMGInputAxis)InputAxis;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void AUMGInputManager::CreateInputAxisBinding(EUMGInputAxis InputAxis) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGInputManager.CreateInputAxisBinding"));
    struct Params_CreateInputAxisBinding {
        EUMGInputAxis InputAxis; // 0x0
    }; // Size: 0x1
    Params_CreateInputAxisBinding params{};
    params.InputAxis = (EUMGInputAxis)InputAxis;
    ProcessEvent(func, &params);
}
void AUMGInputManager::CreateInputActionBinding(EUMGInputAction InputAction, EInputEvent InputEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMGFocus.UMGInputManager.CreateInputActionBinding"));
    struct Params_CreateInputActionBinding {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
    }; // Size: 0x2
    Params_CreateInputActionBinding params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    ProcessEvent(func, &params);
}
