#include "AActor.hpp"
#include "AChannelingSpellTool.hpp"
#include "ALumosEmberActor.hpp"
#include "ALumosSpellTool.hpp"
#include "EStandardManagedPriority.hpp"
#include "FLumosLevelData.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "ULumosScalabilitySettingsAsset.hpp"
#include "UObject.hpp"
void ALumosSpellTool::SetLumosLevelSettingsNew(float IntensityFactor, float Radius, float MinDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosSpellTool.SetLumosLevelSettingsNew"));
    struct Params_SetLumosLevelSettingsNew {
        float IntensityFactor; // 0x0
        float Radius; // 0x4
        float MinDistance; // 0x8
    }; // Size: 0xc
    Params_SetLumosLevelSettingsNew params{};
    params.IntensityFactor = (float)IntensityFactor;
    params.Radius = (float)Radius;
    params.MinDistance = (float)MinDistance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
ALumosSpellTool* ALumosSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosSpellTool");
    return (ALumosSpellTool*)res;
}
void ALumosSpellTool::TurnOffLumos(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosSpellTool.TurnOffLumos"));
    struct Params_TurnOffLumos {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_TurnOffLumos params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
int32_t ALumosSpellTool::GetLumosDebug() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosSpellTool.GetLumosDebug"));
    struct Params_GetLumosDebug {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLumosDebug params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void ALumosSpellTool::ResetLumosLevelSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosSpellTool.ResetLumosLevelSettings"));
    struct Params_ResetLumosLevelSettings {
    }; // Size: 0x0
    Params_ResetLumosLevelSettings params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALumosSpellTool::SetLumosVolumetricScatteringIntensity(float Intensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosSpellTool.SetLumosVolumetricScatteringIntensity"));
    struct Params_SetLumosVolumetricScatteringIntensity {
        float Intensity; // 0x0
    }; // Size: 0x4
    Params_SetLumosVolumetricScatteringIntensity params{};
    params.Intensity = (float)Intensity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALumosSpellTool::StopLumos() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosSpellTool.StopLumos"));
    struct Params_StopLumos {
    }; // Size: 0x0
    Params_StopLumos params{};
    ProcessEvent(func, &params);
}
void ALumosSpellTool::SetLumosLevelSettings(float Intensity, float Radius, float MinDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosSpellTool.SetLumosLevelSettings"));
    struct Params_SetLumosLevelSettings {
        float Intensity; // 0x0
        float Radius; // 0x4
        float MinDistance; // 0x8
    }; // Size: 0xc
    Params_SetLumosLevelSettings params{};
    params.Intensity = (float)Intensity;
    params.Radius = (float)Radius;
    params.MinDistance = (float)MinDistance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ALumosSpellTool::ObjectNearSound() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosSpellTool.ObjectNearSound"));
    struct Params_ObjectNearSound {
    }; // Size: 0x0
    Params_ObjectNearSound params{};
    ProcessEvent(func, &params);
}
void ALumosSpellTool::ActivateLumos(EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosSpellTool.ActivateLumos"));
    struct Params_ActivateLumos {
        EStandardManagedPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_ActivateLumos params{};
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
bool ALumosSpellTool::IsLumosActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosSpellTool.IsLumosActive"));
    struct Params_IsLumosActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLumosActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float ALumosSpellTool::GetLumosVolumetricScatteringIntensity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosSpellTool.GetLumosVolumetricScatteringIntensity"));
    struct Params_GetLumosVolumetricScatteringIntensity {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLumosVolumetricScatteringIntensity params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ALumosSpellTool::GetLumosLevelIntensityFactor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosSpellTool.GetLumosLevelIntensityFactor"));
    struct Params_GetLumosLevelIntensityFactor {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLumosLevelIntensityFactor params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
ALumosEmberActor* ALumosSpellTool::GetLumosActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosSpellTool.GetLumosActor"));
    struct Params_GetLumosActor {
        ALumosEmberActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLumosActor params{};
    ProcessEvent(func, &params);
    return (ALumosEmberActor*)params.ReturnValue;
}
void ALumosSpellTool::DeactivateLumos(EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LumosSpellTool.DeactivateLumos"));
    struct Params_DeactivateLumos {
        EStandardManagedPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_DeactivateLumos params{};
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
