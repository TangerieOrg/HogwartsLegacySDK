#include "ESpellButton.hpp"
#include "FKey.hpp"
#include "UFunction.hpp"
#include "UGlobalLightingCustomBlendableFocusValue.hpp"
#include "USceneActionState_PIM.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_PIM* USceneActionState_PIM::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_PIM");
    return (USceneActionState_PIM*)res;
}
void USceneActionState_PIM::WidgetLoaded() {}
void USceneActionState_PIM::HandleWildcardActionPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_PIM.HandleWildcardActionPressed"));
    struct Params_HandleWildcardActionPressed {
    }; // Size: 0x0
    Params_HandleWildcardActionPressed params{};
    ProcessEvent(func, &params);
}
void USceneActionState_PIM::HandleSpellButtonPressed(ESpellButton SpellButton) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_PIM.HandleSpellButtonPressed"));
    struct Params_HandleSpellButtonPressed {
        ESpellButton SpellButton; // 0x0
    }; // Size: 0x1
    Params_HandleSpellButtonPressed params{};
    params.SpellButton = (ESpellButton)SpellButton;
    ProcessEvent(func, &params);
}
void USceneActionState_PIM::HandleWildcardActionReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_PIM.HandleWildcardActionReleased"));
    struct Params_HandleWildcardActionReleased {
    }; // Size: 0x0
    Params_HandleWildcardActionReleased params{};
    ProcessEvent(func, &params);
}
void USceneActionState_PIM::TelescopeWidgetLoaded() {}
void USceneActionState_PIM::HandleWildcardAxisChanged(float AxisVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_PIM.HandleWildcardAxisChanged"));
    struct Params_HandleWildcardAxisChanged {
        float AxisVal; // 0x0
    }; // Size: 0x4
    Params_HandleWildcardAxisChanged params{};
    params.AxisVal = (float)AxisVal;
    ProcessEvent(func, &params);
}
void USceneActionState_PIM::HandleModifierReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_PIM.HandleModifierReleased"));
    struct Params_HandleModifierReleased {
    }; // Size: 0x0
    Params_HandleModifierReleased params{};
    ProcessEvent(func, &params);
}
void USceneActionState_PIM::FinishNow(bool bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_PIM.FinishNow"));
    struct Params_FinishNow {
        bool bSuccess; // 0x0
    }; // Size: 0x1
    Params_FinishNow params{};
    params.bSuccess = (bool)bSuccess;
    ProcessEvent(func, &params);
}
void USceneActionState_PIM::HandleModifierPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_PIM.HandleModifierPressed"));
    struct Params_HandleModifierPressed {
    }; // Size: 0x0
    Params_HandleModifierPressed params{};
    ProcessEvent(func, &params);
}
void USceneActionState_PIM::HandleModifierAxisChanged(float AxisVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_PIM.HandleModifierAxisChanged"));
    struct Params_HandleModifierAxisChanged {
        float AxisVal; // 0x0
    }; // Size: 0x4
    Params_HandleModifierAxisChanged params{};
    params.AxisVal = (float)AxisVal;
    ProcessEvent(func, &params);
}
void USceneActionState_PIM::HandleAnalogStick(FKey Key, float AnalogValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_PIM.HandleAnalogStick"));
    struct Params_HandleAnalogStick {
        FKey Key; // 0x0
        float AnalogValue; // 0x18
    }; // Size: 0x1c
    Params_HandleAnalogStick params{};
    params.Key = (FKey)Key;
    params.AnalogValue = (float)AnalogValue;
    ProcessEvent(func, &params);
}
void USceneActionState_PIM::HandleAcceptActionReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_PIM.HandleAcceptActionReleased"));
    struct Params_HandleAcceptActionReleased {
    }; // Size: 0x0
    Params_HandleAcceptActionReleased params{};
    ProcessEvent(func, &params);
}
void USceneActionState_PIM::HandleAcceptActionPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_PIM.HandleAcceptActionPressed"));
    struct Params_HandleAcceptActionPressed {
    }; // Size: 0x0
    Params_HandleAcceptActionPressed params{};
    ProcessEvent(func, &params);
}
