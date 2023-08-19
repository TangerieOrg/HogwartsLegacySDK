#include "FFlowDynamicRippleRequest.hpp"
#include "FVector.hpp"
#include "UFlowRippleSubsystem.hpp"
#include "UFlowRippleSystemSettings.hpp"
#include "UFunction.hpp"
#include "UPlayerRenderTarget.hpp"
#include "USceneComponent.hpp"
#include "UTextureRenderTarget2DArray.hpp"
#include "UWorldSubsystem.hpp"
void UFlowRippleSubsystem::RegisterDynamicRippleSource(FFlowDynamicRippleRequest& Request) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Flow.FlowRippleSubsystem.RegisterDynamicRippleSource"));
    struct Params_RegisterDynamicRippleSource {
        FFlowDynamicRippleRequest Request; // 0x0
    }; // Size: 0x70
    Params_RegisterDynamicRippleSource params{};
    params.Request = (FFlowDynamicRippleRequest)Request;
    ProcessEvent(func, &params);
    Request = params.Request;
}
UFlowRippleSubsystem* UFlowRippleSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.FlowRippleSubsystem");
    return (UFlowRippleSubsystem*)res;
}
void UFlowRippleSubsystem::UnregisterDynamicRippleSource(USceneComponent* Attachment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Flow.FlowRippleSubsystem.UnregisterDynamicRippleSource"));
    struct Params_UnregisterDynamicRippleSource {
        USceneComponent* Attachment; // 0x0
    }; // Size: 0x8
    Params_UnregisterDynamicRippleSource params{};
    params.Attachment = (USceneComponent*)Attachment;
    ProcessEvent(func, &params);
}
void UFlowRippleSubsystem::RemovePersistentRippleSource(USceneComponent* Requester) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Flow.FlowRippleSubsystem.RemovePersistentRippleSource"));
    struct Params_RemovePersistentRippleSource {
        USceneComponent* Requester; // 0x0
    }; // Size: 0x8
    Params_RemovePersistentRippleSource params{};
    params.Requester = (USceneComponent*)Requester;
    ProcessEvent(func, &params);
}
void UFlowRippleSubsystem::AddRipple(FVector& PositionWorld, float Intensity, float Radius, float LifeTime, float ForceOverLifetime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Flow.FlowRippleSubsystem.AddRipple"));
    struct Params_AddRipple {
        FVector PositionWorld; // 0x0
        float Intensity; // 0xc
        float Radius; // 0x10
        float LifeTime; // 0x14
        float ForceOverLifetime; // 0x18
    }; // Size: 0x1c
    Params_AddRipple params{};
    params.PositionWorld = (FVector)PositionWorld;
    params.Intensity = (float)Intensity;
    params.Radius = (float)Radius;
    params.LifeTime = (float)LifeTime;
    params.ForceOverLifetime = (float)ForceOverLifetime;
    ProcessEvent(func, &params);
    PositionWorld = params.PositionWorld;
}
void UFlowRippleSubsystem::AddPersistentRippleSource(USceneComponent* Requester, float Intensity, float Radius, float OscillationFrequency) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Flow.FlowRippleSubsystem.AddPersistentRippleSource"));
    struct Params_AddPersistentRippleSource {
        USceneComponent* Requester; // 0x0
        float Intensity; // 0x8
        float Radius; // 0xc
        float OscillationFrequency; // 0x10
    }; // Size: 0x14
    Params_AddPersistentRippleSource params{};
    params.Requester = (USceneComponent*)Requester;
    params.Intensity = (float)Intensity;
    params.Radius = (float)Radius;
    params.OscillationFrequency = (float)OscillationFrequency;
    ProcessEvent(func, &params);
}
