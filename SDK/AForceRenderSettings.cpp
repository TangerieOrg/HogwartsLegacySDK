#include "AActor.hpp"
#include "AForceRenderSettings.hpp"
#include "EForceRenderSettingsPhase.hpp"
#include "FForceRenderSettingsCommand.hpp"
#include "UFunction.hpp"
AForceRenderSettings* AForceRenderSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ForceRenderSettings");
    return (AForceRenderSettings*)res;
}
bool AForceRenderSettings::IsEditor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ForceRenderSettings.IsEditor"));
    struct Params_IsEditor {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsEditor params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AForceRenderSettings::QueryAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ForceRenderSettings.QueryAll"));
    struct Params_QueryAll {
    }; // Size: 0x0
    Params_QueryAll params{};
    ProcessEvent(func, &params);
}
bool AForceRenderSettings::IsPlayInEditor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ForceRenderSettings.IsPlayInEditor"));
    struct Params_IsPlayInEditor {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlayInEditor params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AForceRenderSettings::Apply(EForceRenderSettingsPhase Phase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ForceRenderSettings.Apply"));
    struct Params_Apply {
        EForceRenderSettingsPhase Phase; // 0x0
    }; // Size: 0x1
    Params_Apply params{};
    params.Phase = (EForceRenderSettingsPhase)Phase;
    ProcessEvent(func, &params);
}
void AForceRenderSettings::ApplyNow() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ForceRenderSettings.ApplyNow"));
    struct Params_ApplyNow {
    }; // Size: 0x0
    Params_ApplyNow params{};
    ProcessEvent(func, &params);
}
