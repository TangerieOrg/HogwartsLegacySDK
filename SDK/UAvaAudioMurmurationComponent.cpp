#include "AActor.hpp"
#include "UAkComponent.hpp"
#include "UAvaAudioMurmurationComponent.hpp"
#include "UFunction.hpp"
UAvaAudioMurmurationComponent* UAvaAudioMurmurationComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaAudioMurmurationComponent");
    return (UAvaAudioMurmurationComponent*)res;
}
void UAvaAudioMurmurationComponent::UpdateHealthRTPCCallback(AActor* InActor, float Delta, bool bIndicateHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioMurmurationComponent.UpdateHealthRTPCCallback"));
    struct Params_UpdateHealthRTPCCallback {
        AActor* InActor; // 0x0
        float Delta; // 0x8
        bool bIndicateHUD; // 0xc
    }; // Size: 0xd
    Params_UpdateHealthRTPCCallback params{};
    params.InActor = (AActor*)InActor;
    params.Delta = (float)Delta;
    params.bIndicateHUD = (bool)bIndicateHUD;
    ProcessEvent(func, &params);
}
void UAvaAudioMurmurationComponent::IncrementRTPC(FString RTPC_Name, int32_t Increment, float InterpolationTime, bool bDecay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioMurmurationComponent.IncrementRTPC"));
    struct Params_IncrementRTPC {
        FString RTPC_Name; // 0x0
        int32_t Increment; // 0x10
        float InterpolationTime; // 0x14
        bool bDecay; // 0x18
    }; // Size: 0x19
    Params_IncrementRTPC params{};
    params.RTPC_Name = (FString)RTPC_Name;
    params.Increment = (int32_t)Increment;
    params.InterpolationTime = (float)InterpolationTime;
    params.bDecay = (bool)bDecay;
    ProcessEvent(func, &params);
}
void UAvaAudioMurmurationComponent::StartIntensityDecay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioMurmurationComponent.StartIntensityDecay"));
    struct Params_StartIntensityDecay {
    }; // Size: 0x0
    Params_StartIntensityDecay params{};
    ProcessEvent(func, &params);
}
void UAvaAudioMurmurationComponent::AbsoluteRTPC(FString RTPC_Name, float RTPC_Value, float InterpolationTimeMs, bool bDecay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioMurmurationComponent.AbsoluteRTPC"));
    struct Params_AbsoluteRTPC {
        FString RTPC_Name; // 0x0
        float RTPC_Value; // 0x10
        float InterpolationTimeMs; // 0x14
        bool bDecay; // 0x18
    }; // Size: 0x19
    Params_AbsoluteRTPC params{};
    params.RTPC_Name = (FString)RTPC_Name;
    params.RTPC_Value = (float)RTPC_Value;
    params.InterpolationTimeMs = (float)InterpolationTimeMs;
    params.bDecay = (bool)bDecay;
    ProcessEvent(func, &params);
}
void UAvaAudioMurmurationComponent::OnCharacterLoadComplete(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioMurmurationComponent.OnCharacterLoadComplete"));
    struct Params_OnCharacterLoadComplete {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_OnCharacterLoadComplete params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
void UAvaAudioMurmurationComponent::OnAddOnMeshesChanged(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaAudioMurmurationComponent.OnAddOnMeshesChanged"));
    struct Params_OnAddOnMeshesChanged {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_OnAddOnMeshesChanged params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
