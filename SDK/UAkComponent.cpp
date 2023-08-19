#include "ECollisionChannel.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FLatentActionInfo.hpp"
#include "FMasterTickThrottlerSettings.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkAuxBus.hpp"
#include "UAkComponent.hpp"
#include "UAkGameObject.hpp"
#include "UAkSwitchValue.hpp"
#include "UAkTrigger.hpp"
#include "UFunction.hpp"
UAkComponent* UAkComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkComponent");
    return (UAkComponent*)res;
}
void UAkComponent::SetWantsOnUpdateTransform(bool bInWantsOnUpdateTranform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.SetWantsOnUpdateTransform"));
    struct Params_SetWantsOnUpdateTransform {
        bool bInWantsOnUpdateTranform; // 0x0
    }; // Size: 0x1
    Params_SetWantsOnUpdateTransform params{};
    params.bInWantsOnUpdateTranform = (bool)bInWantsOnUpdateTranform;
    ProcessEvent(func, &params);
}
void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.UseReverbVolumes"));
    struct Params_UseReverbVolumes {
        bool inUseReverbVolumes; // 0x0
    }; // Size: 0x1
    Params_UseReverbVolumes params{};
    params.inUseReverbVolumes = (bool)inUseReverbVolumes;
    ProcessEvent(func, &params);
}
void UAkComponent::SetOutputBusVolume(float BusVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.SetOutputBusVolume"));
    struct Params_SetOutputBusVolume {
        float BusVolume; // 0x0
    }; // Size: 0x4
    Params_SetOutputBusVolume params{};
    params.BusVolume = (float)BusVolume;
    ProcessEvent(func, &params);
}
void UAkComponent::UseEarlyReflections(UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.UseEarlyReflections"));
    struct Params_UseEarlyReflections {
        UAkAuxBus* AuxBus; // 0x0
        int32_t Order; // 0x8
        float BusSendGain; // 0xc
        float MaxPathLength; // 0x10
        bool SpotReflectors; // 0x14
        char pad_15[0x3];
        FString AuxBusName; // 0x18
    }; // Size: 0x28
    Params_UseEarlyReflections params{};
    params.AuxBus = (UAkAuxBus*)AuxBus;
    params.Order = (int32_t)Order;
    params.BusSendGain = (float)BusSendGain;
    params.MaxPathLength = (float)MaxPathLength;
    params.SpotReflectors = (bool)SpotReflectors;
    params.AuxBusName = (FString)AuxBusName;
    ProcessEvent(func, &params);
}
void UAkComponent::SetSwitchPropagating(UAkSwitchValue* SwitchValue, FString SwitchGroup, FString SwitchState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.SetSwitchPropagating"));
    struct Params_SetSwitchPropagating {
        UAkSwitchValue* SwitchValue; // 0x0
        FString SwitchGroup; // 0x8
        FString SwitchState; // 0x18
    }; // Size: 0x28
    Params_SetSwitchPropagating params{};
    params.SwitchValue = (UAkSwitchValue*)SwitchValue;
    params.SwitchGroup = (FString)SwitchGroup;
    params.SwitchState = (FString)SwitchState;
    ProcessEvent(func, &params);
}
void UAkComponent::SetSwitch(UAkSwitchValue* SwitchValue, FString SwitchGroup, FString SwitchState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.SetSwitch"));
    struct Params_SetSwitch {
        UAkSwitchValue* SwitchValue; // 0x0
        FString SwitchGroup; // 0x8
        FString SwitchState; // 0x18
    }; // Size: 0x28
    Params_SetSwitch params{};
    params.SwitchValue = (UAkSwitchValue*)SwitchValue;
    params.SwitchGroup = (FString)SwitchGroup;
    params.SwitchState = (FString)SwitchState;
    ProcessEvent(func, &params);
}
void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.SetStopWhenOwnerDestroyed"));
    struct Params_SetStopWhenOwnerDestroyed {
        bool bStopWhenOwnerDestroyed; // 0x0
    }; // Size: 0x1
    Params_SetStopWhenOwnerDestroyed params{};
    params.bStopWhenOwnerDestroyed = (bool)bStopWhenOwnerDestroyed;
    ProcessEvent(func, &params);
}
void UAkComponent::SetListeners(TArray<UAkComponent*>& Listeners) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.SetListeners"));
    struct Params_SetListeners {
        TArray<UAkComponent*> Listeners; // 0x0
    }; // Size: 0x10
    Params_SetListeners params{};
    params.Listeners = (TArray<UAkComponent*>)Listeners;
    ProcessEvent(func, &params);
    Listeners = params.Listeners;
}
void UAkComponent::SetGameObjectRadius(float in_outerRadius, float in_innerRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.SetGameObjectRadius"));
    struct Params_SetGameObjectRadius {
        float in_outerRadius; // 0x0
        float in_innerRadius; // 0x4
    }; // Size: 0x8
    Params_SetGameObjectRadius params{};
    params.in_outerRadius = (float)in_outerRadius;
    params.in_innerRadius = (float)in_innerRadius;
    ProcessEvent(func, &params);
}
void UAkComponent::SetEarlyReflectionsVolume(float SendVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.SetEarlyReflectionsVolume"));
    struct Params_SetEarlyReflectionsVolume {
        float SendVolume; // 0x0
    }; // Size: 0x4
    Params_SetEarlyReflectionsVolume params{};
    params.SendVolume = (float)SendVolume;
    ProcessEvent(func, &params);
}
void UAkComponent::SetEarlyReflectionsAuxBus(FString AuxBusName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.SetEarlyReflectionsAuxBus"));
    struct Params_SetEarlyReflectionsAuxBus {
        FString AuxBusName; // 0x0
    }; // Size: 0x10
    Params_SetEarlyReflectionsAuxBus params{};
    params.AuxBusName = (FString)AuxBusName;
    ProcessEvent(func, &params);
}
void UAkComponent::SetAttenuationScalingFactor(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.SetAttenuationScalingFactor"));
    struct Params_SetAttenuationScalingFactor {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetAttenuationScalingFactor params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UAkComponent::PostTrigger(UAkTrigger* TriggerValue, FString Trigger) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.PostTrigger"));
    struct Params_PostTrigger {
        UAkTrigger* TriggerValue; // 0x0
        FString Trigger; // 0x8
    }; // Size: 0x18
    Params_PostTrigger params{};
    params.TriggerValue = (UAkTrigger*)TriggerValue;
    params.Trigger = (FString)Trigger;
    ProcessEvent(func, &params);
}
float UAkComponent::GetAttenuationRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.GetAttenuationRadius"));
    struct Params_GetAttenuationRadius {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAttenuationRadius params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UAkComponent::PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync"));
    struct Params_PostAssociatedAkEventAndWaitForEndAsync {
        int32_t PlayingID; // 0x0
        char pad_4[0x4];
        TArray<FAkExternalSourceInfo> ExternalSources; // 0x8
        FLatentActionInfo LatentInfo; // 0x18
    }; // Size: 0x30
    Params_PostAssociatedAkEventAndWaitForEndAsync params{};
    params.PlayingID = (int32_t)PlayingID;
    params.ExternalSources = (TArray<FAkExternalSourceInfo>)ExternalSources;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    ProcessEvent(func, &params);
    PlayingID = params.PlayingID;
    ExternalSources = params.ExternalSources;
}
int32_t UAkComponent::PostAssociatedAkEventAndWaitForEnd(TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd"));
    struct Params_PostAssociatedAkEventAndWaitForEnd {
        TArray<FAkExternalSourceInfo> ExternalSources; // 0x0
        FLatentActionInfo LatentInfo; // 0x10
        int32_t ReturnValue; // 0x28
    }; // Size: 0x2c
    Params_PostAssociatedAkEventAndWaitForEnd params{};
    params.ExternalSources = (TArray<FAkExternalSourceInfo>)ExternalSources;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    ProcessEvent(func, &params);
    ExternalSources = params.ExternalSources;
    return (int32_t)params.ReturnValue;
}
int32_t UAkComponent::PostAkEventByName(FString in_EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.PostAkEventByName"));
    struct Params_PostAkEventByName {
        FString in_EventName; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_PostAkEventByName params{};
    params.in_EventName = (FString)in_EventName;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UAkComponent::PostAkEventAndWaitForEndAsync(UAkAudioEvent* AkEvent, int32_t& PlayingID, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.PostAkEventAndWaitForEndAsync"));
    struct Params_PostAkEventAndWaitForEndAsync {
        UAkAudioEvent* AkEvent; // 0x0
        int32_t PlayingID; // 0x8
        char pad_c[0x4];
        TArray<FAkExternalSourceInfo> ExternalSources; // 0x10
        FLatentActionInfo LatentInfo; // 0x20
    }; // Size: 0x38
    Params_PostAkEventAndWaitForEndAsync params{};
    params.AkEvent = (UAkAudioEvent*)AkEvent;
    params.PlayingID = (int32_t)PlayingID;
    params.ExternalSources = (TArray<FAkExternalSourceInfo>)ExternalSources;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    ProcessEvent(func, &params);
    ExternalSources = params.ExternalSources;
    PlayingID = params.PlayingID;
}
int32_t UAkComponent::PostAkEventAndWaitForEnd(UAkAudioEvent* AkEvent, FString in_EventName, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.PostAkEventAndWaitForEnd"));
    struct Params_PostAkEventAndWaitForEnd {
        UAkAudioEvent* AkEvent; // 0x0
        FString in_EventName; // 0x8
        TArray<FAkExternalSourceInfo> ExternalSources; // 0x18
        FLatentActionInfo LatentInfo; // 0x28
        int32_t ReturnValue; // 0x40
    }; // Size: 0x44
    Params_PostAkEventAndWaitForEnd params{};
    params.AkEvent = (UAkAudioEvent*)AkEvent;
    params.in_EventName = (FString)in_EventName;
    params.ExternalSources = (TArray<FAkExternalSourceInfo>)ExternalSources;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    ProcessEvent(func, &params);
    ExternalSources = params.ExternalSources;
    return (int32_t)params.ReturnValue;
}
void UAkComponent::OcclusionRefreshStackSetDefault(float RefreshInterval) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.OcclusionRefreshStackSetDefault"));
    struct Params_OcclusionRefreshStackSetDefault {
        float RefreshInterval; // 0x0
    }; // Size: 0x4
    Params_OcclusionRefreshStackSetDefault params{};
    params.RefreshInterval = (float)RefreshInterval;
    ProcessEvent(func, &params);
}
void UAkComponent::OcclusionRefreshStackRemove(int32_t StackHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.OcclusionRefreshStackRemove"));
    struct Params_OcclusionRefreshStackRemove {
        int32_t StackHandle; // 0x0
    }; // Size: 0x4
    Params_OcclusionRefreshStackRemove params{};
    params.StackHandle = (int32_t)StackHandle;
    ProcessEvent(func, &params);
}
int32_t UAkComponent::OcclusionRefreshStackAdd(float RefreshInterval, int32_t Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.OcclusionRefreshStackAdd"));
    struct Params_OcclusionRefreshStackAdd {
        float RefreshInterval; // 0x0
        int32_t Priority; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_OcclusionRefreshStackAdd params{};
    params.RefreshInterval = (float)RefreshInterval;
    params.Priority = (int32_t)Priority;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UAkComponent::MasterTickThrottlerSetNoTickRadius(float NoTickRadiusMeters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkComponent.MasterTickThrottlerSetNoTickRadius"));
    struct Params_MasterTickThrottlerSetNoTickRadius {
        float NoTickRadiusMeters; // 0x0
    }; // Size: 0x4
    Params_MasterTickThrottlerSetNoTickRadius params{};
    params.NoTickRadiusMeters = (float)NoTickRadiusMeters;
    ProcessEvent(func, &params);
}
