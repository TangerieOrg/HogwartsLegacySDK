#include "AAudioVolume.hpp"
#include "AVolume.hpp"
#include "FAudioVolumeSubmixOverrideSettings.hpp"
#include "FAudioVolumeSubmixSendSettings.hpp"
#include "FInteriorSettings.hpp"
#include "FReverbSettings.hpp"
#include "UFunction.hpp"
void AAudioVolume::OnRep_bEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioVolume.OnRep_bEnabled"));
    struct Params_OnRep_bEnabled {
    }; // Size: 0x0
    Params_OnRep_bEnabled params{};
    ProcessEvent(func, &params);
}
void AAudioVolume::SetSubmixSendSettings(TArray<FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioVolume.SetSubmixSendSettings"));
    struct Params_SetSubmixSendSettings {
        TArray<FAudioVolumeSubmixSendSettings> NewSubmixSendSettings; // 0x0
    }; // Size: 0x10
    Params_SetSubmixSendSettings params{};
    params.NewSubmixSendSettings = (TArray<FAudioVolumeSubmixSendSettings>)NewSubmixSendSettings;
    ProcessEvent(func, &params);
    NewSubmixSendSettings = params.NewSubmixSendSettings;
}
AAudioVolume* AAudioVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AudioVolume");
    return (AAudioVolume*)res;
}
void AAudioVolume::SetSubmixOverrideSettings(TArray<FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioVolume.SetSubmixOverrideSettings"));
    struct Params_SetSubmixOverrideSettings {
        TArray<FAudioVolumeSubmixOverrideSettings> NewSubmixOverrideSettings; // 0x0
    }; // Size: 0x10
    Params_SetSubmixOverrideSettings params{};
    params.NewSubmixOverrideSettings = (TArray<FAudioVolumeSubmixOverrideSettings>)NewSubmixOverrideSettings;
    ProcessEvent(func, &params);
    NewSubmixOverrideSettings = params.NewSubmixOverrideSettings;
}
void AAudioVolume::SetReverbSettings(FReverbSettings& NewReverbSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioVolume.SetReverbSettings"));
    struct Params_SetReverbSettings {
        FReverbSettings NewReverbSettings; // 0x0
    }; // Size: 0x20
    Params_SetReverbSettings params{};
    params.NewReverbSettings = (FReverbSettings)NewReverbSettings;
    ProcessEvent(func, &params);
    NewReverbSettings = params.NewReverbSettings;
}
void AAudioVolume::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioVolume.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
void AAudioVolume::SetInteriorSettings(FInteriorSettings& NewInteriorSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioVolume.SetInteriorSettings"));
    struct Params_SetInteriorSettings {
        FInteriorSettings NewInteriorSettings; // 0x0
    }; // Size: 0x24
    Params_SetInteriorSettings params{};
    params.NewInteriorSettings = (FInteriorSettings)NewInteriorSettings;
    ProcessEvent(func, &params);
    NewInteriorSettings = params.NewInteriorSettings;
}
void AAudioVolume::SetEnabled(bool bNewEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioVolume.SetEnabled"));
    struct Params_SetEnabled {
        bool bNewEnabled; // 0x0
    }; // Size: 0x1
    Params_SetEnabled params{};
    params.bNewEnabled = (bool)bNewEnabled;
    ProcessEvent(func, &params);
}
