#include "FForceFeedbackAttenuationSettings.hpp"
#include "UForceFeedbackAttenuation.hpp"
#include "UForceFeedbackComponent.hpp"
#include "UForceFeedbackEffect.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
UForceFeedbackComponent* UForceFeedbackComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ForceFeedbackComponent");
    return (UForceFeedbackComponent*)res;
}
void UForceFeedbackComponent::SetForceFeedbackEffect(UForceFeedbackEffect* NewForceFeedbackEffect) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ForceFeedbackComponent.SetForceFeedbackEffect"));
    struct Params_SetForceFeedbackEffect {
        UForceFeedbackEffect* NewForceFeedbackEffect; // 0x0
    }; // Size: 0x8
    Params_SetForceFeedbackEffect params{};
    params.NewForceFeedbackEffect = (UForceFeedbackEffect*)NewForceFeedbackEffect;
    ProcessEvent(func, &params);
}
void UForceFeedbackComponent::Stop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ForceFeedbackComponent.Stop"));
    struct Params_Stop {
    }; // Size: 0x0
    Params_Stop params{};
    ProcessEvent(func, &params);
}
void UForceFeedbackComponent::SetIntensityMultiplier(float NewIntensityMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ForceFeedbackComponent.SetIntensityMultiplier"));
    struct Params_SetIntensityMultiplier {
        float NewIntensityMultiplier; // 0x0
    }; // Size: 0x4
    Params_SetIntensityMultiplier params{};
    params.NewIntensityMultiplier = (float)NewIntensityMultiplier;
    ProcessEvent(func, &params);
}
void UForceFeedbackComponent::AdjustAttenuation(FForceFeedbackAttenuationSettings& InAttenuationSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ForceFeedbackComponent.AdjustAttenuation"));
    struct Params_AdjustAttenuation {
        FForceFeedbackAttenuationSettings InAttenuationSettings; // 0x0
    }; // Size: 0xb0
    Params_AdjustAttenuation params{};
    params.InAttenuationSettings = (FForceFeedbackAttenuationSettings)InAttenuationSettings;
    ProcessEvent(func, &params);
    InAttenuationSettings = params.InAttenuationSettings;
}
void UForceFeedbackComponent::Play(float StartTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ForceFeedbackComponent.Play"));
    struct Params_Play {
        float StartTime; // 0x0
    }; // Size: 0x4
    Params_Play params{};
    params.StartTime = (float)StartTime;
    ProcessEvent(func, &params);
}
bool UForceFeedbackComponent::BP_GetAttenuationSettingsToApply(FForceFeedbackAttenuationSettings& OutAttenuationSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ForceFeedbackComponent.BP_GetAttenuationSettingsToApply"));
    struct Params_BP_GetAttenuationSettingsToApply {
        FForceFeedbackAttenuationSettings OutAttenuationSettings; // 0x0
        bool ReturnValue; // 0xb0
    }; // Size: 0xb1
    Params_BP_GetAttenuationSettingsToApply params{};
    params.OutAttenuationSettings = (FForceFeedbackAttenuationSettings)OutAttenuationSettings;
    ProcessEvent(func, &params);
    OutAttenuationSettings = params.OutAttenuationSettings;
    return (bool)params.ReturnValue;
}
