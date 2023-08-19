#include "EWLightProbeCompressionType.hpp"
#include "EWLightProbesBlendType.hpp"
#include "EWLightProbesCorrectionType.hpp"
#include "EWLightProbesCullType.hpp"
#include "EWLightProbesLandscapeUsage.hpp"
#include "EWLightProbesShapeType.hpp"
#include "EWLightProbesSkylightUsage.hpp"
#include "FGuid.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UWLightProbesVolumeCaptureSetup.hpp"
#include "UWLightProbesVolumeComponent.hpp"
UWLightProbesVolumeComponent* UWLightProbesVolumeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WLightProbesVolumeComponent");
    return (UWLightProbesVolumeComponent*)res;
}
void UWLightProbesVolumeComponent::SetFade(float fade) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WLightProbesVolumeComponent.SetFade"));
    struct Params_SetFade {
        float fade; // 0x0
    }; // Size: 0x4
    Params_SetFade params{};
    params.fade = (float)fade;
    ProcessEvent(func, &params);
}
void UWLightProbesVolumeComponent::SetBounceBoost(float NewBoostValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WLightProbesVolumeComponent.SetBounceBoost"));
    struct Params_SetBounceBoost {
        float NewBoostValue; // 0x0
    }; // Size: 0x4
    Params_SetBounceBoost params{};
    params.NewBoostValue = (float)NewBoostValue;
    ProcessEvent(func, &params);
}
