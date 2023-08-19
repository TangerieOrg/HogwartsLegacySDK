#include "AActor.hpp"
#include "AkActionOnEventType.hpp"
#include "AkChannelConfiguration.hpp"
#include "AkMultiPositionType.hpp"
#include "EAkCurveInterpolation.hpp"
#include "EAttachLocation\Type.hpp"
#include "ERTPCValueType.hpp"
#include "FAkChannelMask.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FAkOutputSettings.hpp"
#include "FLatentActionInfo.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "PanningRule.hpp"
#include "UAkAudioBank.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkAudioType.hpp"
#include "UAkAuxBus.hpp"
#include "UAkComponent.hpp"
#include "UAkGameplayStatics.hpp"
#include "UAkMediaAsset.hpp"
#include "UAkPortalComponent.hpp"
#include "UAkRtpc.hpp"
#include "UAkStateValue.hpp"
#include "UAkSwitchValue.hpp"
#include "UAkTrigger.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
UAkGameplayStatics* UAkGameplayStatics::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkGameplayStatics");
    return (UAkGameplayStatics*)res;
}
UObject* UAkGameplayStatics::GetAkAudioTypeUserData(UAkAudioType* Instance, UClass* Type) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.GetAkAudioTypeUserData"));
    struct Params_GetAkAudioTypeUserData {
        UAkAudioType* Instance; // 0x0
        UClass* Type; // 0x8
        UObject* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetAkAudioTypeUserData params{};
    params.Instance = (UAkAudioType*)Instance;
    params.Type = (UClass*)Type;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
void UAkGameplayStatics::SetPortalToPortalObstruction(UAkPortalComponent* PortalComponent0, UAkPortalComponent* PortalComponent1, float ObstructionValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.SetPortalToPortalObstruction"));
    struct Params_SetPortalToPortalObstruction {
        UAkPortalComponent* PortalComponent0; // 0x0
        UAkPortalComponent* PortalComponent1; // 0x8
        float ObstructionValue; // 0x10
    }; // Size: 0x14
    Params_SetPortalToPortalObstruction params{};
    params.PortalComponent0 = (UAkPortalComponent*)PortalComponent0;
    params.PortalComponent1 = (UAkPortalComponent*)PortalComponent1;
    params.ObstructionValue = (float)ObstructionValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::UseReverbVolumes(bool inUseReverbVolumes, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.UseReverbVolumes"));
    struct Params_UseReverbVolumes {
        bool inUseReverbVolumes; // 0x0
        char pad_1[0x7];
        AActor* Actor; // 0x8
    }; // Size: 0x10
    Params_UseReverbVolumes params{};
    params.inUseReverbVolumes = (bool)inUseReverbVolumes;
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::SetCurrentAudioCulture(FString AudioCulture, FLatentActionInfo LatentInfo, UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.SetCurrentAudioCulture"));
    struct Params_SetCurrentAudioCulture {
        FString AudioCulture; // 0x0
        FLatentActionInfo LatentInfo; // 0x10
        UObject* WorldContextObject; // 0x28
    }; // Size: 0x30
    Params_SetCurrentAudioCulture params{};
    params.AudioCulture = (FString)AudioCulture;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::UseEarlyReflections(AActor* Actor, UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.UseEarlyReflections"));
    struct Params_UseEarlyReflections {
        AActor* Actor; // 0x0
        UAkAuxBus* AuxBus; // 0x8
        int32_t Order; // 0x10
        float BusSendGain; // 0x14
        float MaxPathLength; // 0x18
        bool SpotReflectors; // 0x1c
        char pad_1d[0x3];
        FString AuxBusName; // 0x20
    }; // Size: 0x30
    Params_UseEarlyReflections params{};
    params.Actor = (AActor*)Actor;
    params.AuxBus = (UAkAuxBus*)AuxBus;
    params.Order = (int32_t)Order;
    params.BusSendGain = (float)BusSendGain;
    params.MaxPathLength = (float)MaxPathLength;
    params.SpotReflectors = (bool)SpotReflectors;
    params.AuxBusName = (FString)AuxBusName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UAkComponent* UAkGameplayStatics::GetAkComponent(USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, EAttachLocation::Type LocationType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.GetAkComponent"));
    struct Params_GetAkComponent {
        USceneComponent* AttachToComponent; // 0x0
        bool ComponentCreated; // 0x8
        char pad_9[0x3];
        FName AttachPointName; // 0xc
        FVector Location; // 0x14
        EAttachLocation::Type LocationType; // 0x20
        char pad_21[0x7];
        UAkComponent* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_GetAkComponent params{};
    params.AttachToComponent = (USceneComponent*)AttachToComponent;
    params.ComponentCreated = (bool)ComponentCreated;
    params.AttachPointName = (FName)AttachPointName;
    params.Location = (FVector)Location;
    params.LocationType = (EAttachLocation::Type)LocationType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ComponentCreated = params.ComponentCreated;
    return (UAkComponent*)params.ReturnValue;
}
void UAkGameplayStatics::SetPortalObstructionAndOcclusion(UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion"));
    struct Params_SetPortalObstructionAndOcclusion {
        UAkPortalComponent* PortalComponent; // 0x0
        float ObstructionValue; // 0x8
        float OcclusionValue; // 0xc
    }; // Size: 0x10
    Params_SetPortalObstructionAndOcclusion params{};
    params.PortalComponent = (UAkPortalComponent*)PortalComponent;
    params.ObstructionValue = (float)ObstructionValue;
    params.OcclusionValue = (float)OcclusionValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::UnloadBank(UAkAudioBank* Bank, FString BankName, FLatentActionInfo LatentInfo, UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.UnloadBank"));
    struct Params_UnloadBank {
        UAkAudioBank* Bank; // 0x0
        FString BankName; // 0x8
        FLatentActionInfo LatentInfo; // 0x18
        UObject* WorldContextObject; // 0x30
    }; // Size: 0x38
    Params_UnloadBank params{};
    params.Bank = (UAkAudioBank*)Bank;
    params.BankName = (FString)BankName;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::ClearBanks() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.ClearBanks"));
    struct Params_ClearBanks {
    }; // Size: 0x0
    Params_ClearBanks params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::SetOcclusionScalingFactor(float ScalingFactor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.SetOcclusionScalingFactor"));
    struct Params_SetOcclusionScalingFactor {
        float ScalingFactor; // 0x0
    }; // Size: 0x4
    Params_SetOcclusionScalingFactor params{};
    params.ScalingFactor = (float)ScalingFactor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::UnloadBankAsync(UAkAudioBank* Bank) {}
void UAkGameplayStatics::UnloadBankByName(FString BankName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.UnloadBankByName"));
    struct Params_UnloadBankByName {
        FString BankName; // 0x0
    }; // Size: 0x10
    Params_UnloadBankByName params{};
    params.BankName = (FString)BankName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID"));
    struct Params_ExecuteActionOnPlayingID {
        AkActionOnEventType ActionType; // 0x0
        char pad_1[0x3];
        int32_t PlayingID; // 0x4
        int32_t TransitionDuration; // 0x8
        EAkCurveInterpolation FadeCurve; // 0xc
    }; // Size: 0xd
    Params_ExecuteActionOnPlayingID params{};
    params.ActionType = (AkActionOnEventType)ActionType;
    params.PlayingID = (int32_t)PlayingID;
    params.TransitionDuration = (int32_t)TransitionDuration;
    params.FadeCurve = (EAkCurveInterpolation)FadeCurve;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::StopProfilerCapture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.StopProfilerCapture"));
    struct Params_StopProfilerCapture {
    }; // Size: 0x0
    Params_StopProfilerCapture params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::PostTrigger(UAkTrigger* TriggerValue, AActor* Actor, FName Trigger) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.PostTrigger"));
    struct Params_PostTrigger {
        UAkTrigger* TriggerValue; // 0x0
        AActor* Actor; // 0x8
        FName Trigger; // 0x10
    }; // Size: 0x18
    Params_PostTrigger params{};
    params.TriggerValue = (UAkTrigger*)TriggerValue;
    params.Actor = (AActor*)Actor;
    params.Trigger = (FName)Trigger;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::SetSpeakerAngles(TArray<float>& SpeakerAngles, float HeightAngle, FString DeviceShareset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.SetSpeakerAngles"));
    struct Params_SetSpeakerAngles {
        TArray<float> SpeakerAngles; // 0x0
        float HeightAngle; // 0x10
        char pad_14[0x4];
        FString DeviceShareset; // 0x18
    }; // Size: 0x28
    Params_SetSpeakerAngles params{};
    params.SpeakerAngles = (TArray<float>)SpeakerAngles;
    params.HeightAngle = (float)HeightAngle;
    params.DeviceShareset = (FString)DeviceShareset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SpeakerAngles = params.SpeakerAngles;
}
void UAkGameplayStatics::StopOutputCapture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.StopOutputCapture"));
    struct Params_StopOutputCapture {
    }; // Size: 0x0
    Params_StopOutputCapture params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::SetMultipleChannelMaskEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions"));
    struct Params_SetMultipleChannelMaskEmitterPositions {
        UAkComponent* GameObjectAkComponent; // 0x0
        TArray<FAkChannelMask> ChannelMasks; // 0x8
        TArray<FTransform> Positions; // 0x18
        AkMultiPositionType MultiPositionType; // 0x28
    }; // Size: 0x29
    Params_SetMultipleChannelMaskEmitterPositions params{};
    params.GameObjectAkComponent = (UAkComponent*)GameObjectAkComponent;
    params.ChannelMasks = (TArray<FAkChannelMask>)ChannelMasks;
    params.Positions = (TArray<FTransform>)Positions;
    params.MultiPositionType = (AkMultiPositionType)MultiPositionType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::StopAllAmbientSounds(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.StopAllAmbientSounds"));
    struct Params_StopAllAmbientSounds {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_StopAllAmbientSounds params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::StopAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.StopAll"));
    struct Params_StopAll {
    }; // Size: 0x0
    Params_StopAll params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FString UAkGameplayStatics::GetCurrentAudioCulture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.GetCurrentAudioCulture"));
    struct Params_GetCurrentAudioCulture {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCurrentAudioCulture params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UAkGameplayStatics::StopActor(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.StopActor"));
    struct Params_StopActor {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_StopActor params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::LoadInitBank() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.LoadInitBank"));
    struct Params_LoadInitBank {
    }; // Size: 0x0
    Params_LoadInitBank params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::StartProfilerCapture(FString Filename) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.StartProfilerCapture"));
    struct Params_StartProfilerCapture {
        FString Filename; // 0x0
    }; // Size: 0x10
    Params_StartProfilerCapture params{};
    params.Filename = (FString)Filename;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::StartOutputCapture(FString Filename) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.StartOutputCapture"));
    struct Params_StartOutputCapture {
        FString Filename; // 0x0
    }; // Size: 0x10
    Params_StartOutputCapture params{};
    params.Filename = (FString)Filename;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::LoadBankByName(FString BankName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.LoadBankByName"));
    struct Params_LoadBankByName {
        FString BankName; // 0x0
    }; // Size: 0x10
    Params_LoadBankByName params{};
    params.BankName = (FString)BankName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::StartAllAmbientSounds(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.StartAllAmbientSounds"));
    struct Params_StartAllAmbientSounds {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_StartAllAmbientSounds params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocation(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, FString EventName, bool AutoDestroy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation"));
    struct Params_SpawnAkComponentAtLocation {
        UObject* WorldContextObject; // 0x0
        UAkAudioEvent* AkEvent; // 0x8
        FVector Location; // 0x10
        FRotator Orientation; // 0x1c
        bool AutoPost; // 0x28
        char pad_29[0x7];
        FString EventName; // 0x30
        bool AutoDestroy; // 0x40
        char pad_41[0x7];
        UAkComponent* ReturnValue; // 0x48
    }; // Size: 0x50
    Params_SpawnAkComponentAtLocation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.AkEvent = (UAkAudioEvent*)AkEvent;
    params.Location = (FVector)Location;
    params.Orientation = (FRotator)Orientation;
    params.AutoPost = (bool)AutoPost;
    params.EventName = (FString)EventName;
    params.AutoDestroy = (bool)AutoDestroy;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAkComponent*)params.ReturnValue;
}
void UAkGameplayStatics::SetSwitch(UAkSwitchValue* SwitchValue, AActor* Actor, FName SwitchGroup, FName SwitchState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.SetSwitch"));
    struct Params_SetSwitch {
        UAkSwitchValue* SwitchValue; // 0x0
        AActor* Actor; // 0x8
        FName SwitchGroup; // 0x10
        FName SwitchState; // 0x18
    }; // Size: 0x20
    Params_SetSwitch params{};
    params.SwitchValue = (UAkSwitchValue*)SwitchValue;
    params.Actor = (AActor*)Actor;
    params.SwitchGroup = (FName)SwitchGroup;
    params.SwitchState = (FName)SwitchState;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::SetState(UAkStateValue* StateValue, FName stateGroup, FName State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.SetState"));
    struct Params_SetState {
        UAkStateValue* StateValue; // 0x0
        FName stateGroup; // 0x8
        FName State; // 0x10
    }; // Size: 0x18
    Params_SetState params{};
    params.StateValue = (UAkStateValue*)StateValue;
    params.stateGroup = (FName)stateGroup;
    params.State = (FName)State;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::LoadBankAsync(UAkAudioBank* Bank) {}
void UAkGameplayStatics::SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, AActor* Actor, FName RTPC) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.SetRTPCValue"));
    struct Params_SetRTPCValue {
        UAkRtpc* RTPCValue; // 0x0
        float Value; // 0x8
        int32_t InterpolationTimeMs; // 0xc
        AActor* Actor; // 0x10
        FName RTPC; // 0x18
    }; // Size: 0x20
    Params_SetRTPCValue params{};
    params.RTPCValue = (UAkRtpc*)RTPCValue;
    params.Value = (float)Value;
    params.InterpolationTimeMs = (int32_t)InterpolationTimeMs;
    params.Actor = (AActor*)Actor;
    params.RTPC = (FName)RTPC;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::SetReflectionsOrder(int32_t Order, bool RefreshPaths) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.SetReflectionsOrder"));
    struct Params_SetReflectionsOrder {
        int32_t Order; // 0x0
        bool RefreshPaths; // 0x4
    }; // Size: 0x5
    Params_SetReflectionsOrder params{};
    params.Order = (int32_t)Order;
    params.RefreshPaths = (bool)RefreshPaths;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::SetPanningRule(PanningRule PanRule) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.SetPanningRule"));
    struct Params_SetPanningRule {
        PanningRule PanRule; // 0x0
    }; // Size: 0x1
    Params_SetPanningRule params{};
    params.PanRule = (PanningRule)PanRule;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::SetOutputBusVolume(float BusVolume, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.SetOutputBusVolume"));
    struct Params_SetOutputBusVolume {
        float BusVolume; // 0x0
        char pad_4[0x4];
        AActor* Actor; // 0x8
    }; // Size: 0x10
    Params_SetOutputBusVolume params{};
    params.BusVolume = (float)BusVolume;
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::PostEventByName(FString EventName, AActor* Actor, bool bStopWhenAttachedToDestroyed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.PostEventByName"));
    struct Params_PostEventByName {
        FString EventName; // 0x0
        AActor* Actor; // 0x10
        bool bStopWhenAttachedToDestroyed; // 0x18
    }; // Size: 0x19
    Params_PostEventByName params{};
    params.EventName = (FString)EventName;
    params.Actor = (AActor*)Actor;
    params.bStopWhenAttachedToDestroyed = (bool)bStopWhenAttachedToDestroyed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UObject* UAkGameplayStatics::GetAkMediaAssetUserData(UAkMediaAsset* Instance, UClass* Type) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.GetAkMediaAssetUserData"));
    struct Params_GetAkMediaAssetUserData {
        UAkMediaAsset* Instance; // 0x0
        UClass* Type; // 0x8
        UObject* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetAkMediaAssetUserData params{};
    params.Instance = (UAkMediaAsset*)Instance;
    params.Type = (UClass*)Type;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
void UAkGameplayStatics::AddOutputCaptureMarker(FString MarkerText) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.AddOutputCaptureMarker"));
    struct Params_AddOutputCaptureMarker {
        FString MarkerText; // 0x0
    }; // Size: 0x10
    Params_AddOutputCaptureMarker params{};
    params.MarkerText = (FString)MarkerText;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::SetOcclusionRefreshInterval(float RefreshInterval, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval"));
    struct Params_SetOcclusionRefreshInterval {
        float RefreshInterval; // 0x0
        char pad_4[0x4];
        AActor* Actor; // 0x8
    }; // Size: 0x10
    Params_SetOcclusionRefreshInterval params{};
    params.RefreshInterval = (float)RefreshInterval;
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::SetMultiplePositions(UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.SetMultiplePositions"));
    struct Params_SetMultiplePositions {
        UAkComponent* GameObjectAkComponent; // 0x0
        TArray<FTransform> Positions; // 0x8
        AkMultiPositionType MultiPositionType; // 0x18
    }; // Size: 0x19
    Params_SetMultiplePositions params{};
    params.GameObjectAkComponent = (UAkComponent*)GameObjectAkComponent;
    params.Positions = (TArray<FTransform>)Positions;
    params.MultiPositionType = (AkMultiPositionType)MultiPositionType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::RemoveOcclusionRefreshFromStack(AActor* Actor, int32_t StackHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.RemoveOcclusionRefreshFromStack"));
    struct Params_RemoveOcclusionRefreshFromStack {
        AActor* Actor; // 0x0
        int32_t StackHandle; // 0x8
    }; // Size: 0xc
    Params_RemoveOcclusionRefreshFromStack params{};
    params.Actor = (AActor*)Actor;
    params.StackHandle = (int32_t)StackHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::SetMultipleChannelEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions"));
    struct Params_SetMultipleChannelEmitterPositions {
        UAkComponent* GameObjectAkComponent; // 0x0
        TArray<AkChannelConfiguration> ChannelMasks; // 0x8
        TArray<FTransform> Positions; // 0x18
        AkMultiPositionType MultiPositionType; // 0x28
    }; // Size: 0x29
    Params_SetMultipleChannelEmitterPositions params{};
    params.GameObjectAkComponent = (UAkComponent*)GameObjectAkComponent;
    params.ChannelMasks = (TArray<AkChannelConfiguration>)ChannelMasks;
    params.Positions = (TArray<FTransform>)Positions;
    params.MultiPositionType = (AkMultiPositionType)MultiPositionType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::SetBusConfig(FString BusName, AkChannelConfiguration ChannelConfiguration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.SetBusConfig"));
    struct Params_SetBusConfig {
        FString BusName; // 0x0
        AkChannelConfiguration ChannelConfiguration; // 0x10
    }; // Size: 0x11
    Params_SetBusConfig params{};
    params.BusName = (FString)BusName;
    params.ChannelConfiguration = (AkChannelConfiguration)ChannelConfiguration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::SetGameObjectToPortalObstruction(UAkComponent* GameObjectAkComponent, UAkPortalComponent* PortalComponent, float ObstructionValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction"));
    struct Params_SetGameObjectToPortalObstruction {
        UAkComponent* GameObjectAkComponent; // 0x0
        UAkPortalComponent* PortalComponent; // 0x8
        float ObstructionValue; // 0x10
    }; // Size: 0x14
    Params_SetGameObjectToPortalObstruction params{};
    params.GameObjectAkComponent = (UAkComponent*)GameObjectAkComponent;
    params.PortalComponent = (UAkPortalComponent*)PortalComponent;
    params.ObstructionValue = (float)ObstructionValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::SetDefaultOcclusionRefreshInterval(AActor* Actor, float RefreshInterval) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.SetDefaultOcclusionRefreshInterval"));
    struct Params_SetDefaultOcclusionRefreshInterval {
        AActor* Actor; // 0x0
        float RefreshInterval; // 0x8
    }; // Size: 0xc
    Params_SetDefaultOcclusionRefreshInterval params{};
    params.Actor = (AActor*)Actor;
    params.RefreshInterval = (float)RefreshInterval;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::SetCurrentAudioCultureAsync(FString AudioCulture) {}
void UAkGameplayStatics::PostEvent(UAkAudioEvent* AkEvent, AActor* Actor, int32_t CallbackMask) {}
void UAkGameplayStatics::ResetRTPCValue(UAkRtpc* RTPCValue, int32_t InterpolationTimeMs, AActor* Actor, FName RTPC) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.ResetRTPCValue"));
    struct Params_ResetRTPCValue {
        UAkRtpc* RTPCValue; // 0x0
        int32_t InterpolationTimeMs; // 0x8
        char pad_c[0x4];
        AActor* Actor; // 0x10
        FName RTPC; // 0x18
    }; // Size: 0x20
    Params_ResetRTPCValue params{};
    params.RTPCValue = (UAkRtpc*)RTPCValue;
    params.InterpolationTimeMs = (int32_t)InterpolationTimeMs;
    params.Actor = (AActor*)Actor;
    params.RTPC = (FName)RTPC;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
TArray<FString> UAkGameplayStatics::GetAvailableAudioCultures() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.GetAvailableAudioCultures"));
    struct Params_GetAvailableAudioCultures {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAvailableAudioCultures params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
void UAkGameplayStatics::ReplaceMainOutput(FAkOutputSettings& MainOutputSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.ReplaceMainOutput"));
    struct Params_ReplaceMainOutput {
        FAkOutputSettings MainOutputSettings; // 0x0
    }; // Size: 0x18
    Params_ReplaceMainOutput params{};
    params.MainOutputSettings = (FAkOutputSettings)MainOutputSettings;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MainOutputSettings = params.MainOutputSettings;
}
int32_t UAkGameplayStatics::AddOcclusionRefreshToStack(AActor* Actor, float RefreshInterval, int32_t Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.AddOcclusionRefreshToStack"));
    struct Params_AddOcclusionRefreshToStack {
        AActor* Actor; // 0x0
        float RefreshInterval; // 0x8
        int32_t Priority; // 0xc
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_AddOcclusionRefreshToStack params{};
    params.Actor = (AActor*)Actor;
    params.RefreshInterval = (float)RefreshInterval;
    params.Priority = (int32_t)Priority;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UAkGameplayStatics::PostEventAttached(UAkAudioEvent* AkEvent, AActor* Actor, FName AttachPointName, bool bStopWhenAttachedToDestroyed, FString EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.PostEventAttached"));
    struct Params_PostEventAttached {
        UAkAudioEvent* AkEvent; // 0x0
        AActor* Actor; // 0x8
        FName AttachPointName; // 0x10
        bool bStopWhenAttachedToDestroyed; // 0x18
        char pad_19[0x7];
        FString EventName; // 0x20
        int32_t ReturnValue; // 0x30
    }; // Size: 0x34
    Params_PostEventAttached params{};
    params.AkEvent = (UAkAudioEvent*)AkEvent;
    params.Actor = (AActor*)Actor;
    params.AttachPointName = (FName)AttachPointName;
    params.bStopWhenAttachedToDestroyed = (bool)bStopWhenAttachedToDestroyed;
    params.EventName = (FString)EventName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UAkGameplayStatics::LoadBank(UAkAudioBank* Bank, FString BankName, FLatentActionInfo LatentInfo, UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.LoadBank"));
    struct Params_LoadBank {
        UAkAudioBank* Bank; // 0x0
        FString BankName; // 0x8
        FLatentActionInfo LatentInfo; // 0x18
        UObject* WorldContextObject; // 0x30
    }; // Size: 0x38
    Params_LoadBank params{};
    params.Bank = (UAkAudioBank*)Bank;
    params.BankName = (FString)BankName;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::PostEventAtLocationByName(FString EventName, FVector Location, FRotator Orientation, UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.PostEventAtLocationByName"));
    struct Params_PostEventAtLocationByName {
        FString EventName; // 0x0
        FVector Location; // 0x10
        FRotator Orientation; // 0x1c
        UObject* WorldContextObject; // 0x28
    }; // Size: 0x30
    Params_PostEventAtLocationByName params{};
    params.EventName = (FString)EventName;
    params.Location = (FVector)Location;
    params.Orientation = (FRotator)Orientation;
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UAkGameplayStatics::PostAndWaitForEndOfEvent(UAkAudioEvent* AkEvent, AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<FAkExternalSourceInfo>& ExternalSources, FString EventName, FLatentActionInfo LatentInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent"));
    struct Params_PostAndWaitForEndOfEvent {
        UAkAudioEvent* AkEvent; // 0x0
        AActor* Actor; // 0x8
        bool bStopWhenAttachedToDestroyed; // 0x10
        char pad_11[0x7];
        TArray<FAkExternalSourceInfo> ExternalSources; // 0x18
        FString EventName; // 0x28
        FLatentActionInfo LatentInfo; // 0x38
        int32_t ReturnValue; // 0x50
    }; // Size: 0x54
    Params_PostAndWaitForEndOfEvent params{};
    params.AkEvent = (UAkAudioEvent*)AkEvent;
    params.Actor = (AActor*)Actor;
    params.bStopWhenAttachedToDestroyed = (bool)bStopWhenAttachedToDestroyed;
    params.ExternalSources = (TArray<FAkExternalSourceInfo>)ExternalSources;
    params.EventName = (FString)EventName;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ExternalSources = params.ExternalSources;
    return (int32_t)params.ReturnValue;
}
int32_t UAkGameplayStatics::PostEventAtLocation(UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, FString EventName, UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.PostEventAtLocation"));
    struct Params_PostEventAtLocation {
        UAkAudioEvent* AkEvent; // 0x0
        FVector Location; // 0x8
        FRotator Orientation; // 0x14
        FString EventName; // 0x20
        UObject* WorldContextObject; // 0x30
        int32_t ReturnValue; // 0x38
    }; // Size: 0x3c
    Params_PostEventAtLocation params{};
    params.AkEvent = (UAkAudioEvent*)AkEvent;
    params.Location = (FVector)Location;
    params.Orientation = (FRotator)Orientation;
    params.EventName = (FString)EventName;
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UAkGameplayStatics::PostAndWaitForEndOfEventAsync(UAkAudioEvent* AkEvent, AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync"));
    struct Params_PostAndWaitForEndOfEventAsync {
        UAkAudioEvent* AkEvent; // 0x0
        AActor* Actor; // 0x8
        int32_t PlayingID; // 0x10
        bool bStopWhenAttachedToDestroyed; // 0x14
        char pad_15[0x3];
        TArray<FAkExternalSourceInfo> ExternalSources; // 0x18
        FLatentActionInfo LatentInfo; // 0x28
    }; // Size: 0x40
    Params_PostAndWaitForEndOfEventAsync params{};
    params.AkEvent = (UAkAudioEvent*)AkEvent;
    params.Actor = (AActor*)Actor;
    params.PlayingID = (int32_t)PlayingID;
    params.bStopWhenAttachedToDestroyed = (bool)bStopWhenAttachedToDestroyed;
    params.ExternalSources = (TArray<FAkExternalSourceInfo>)ExternalSources;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PlayingID = params.PlayingID;
    ExternalSources = params.ExternalSources;
}
void UAkGameplayStatics::LoadBanks(TArray<UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.LoadBanks"));
    struct Params_LoadBanks {
        TArray<UAkAudioBank*> SoundBanks; // 0x0
        bool SynchronizeSoundBanks; // 0x10
    }; // Size: 0x11
    Params_LoadBanks params{};
    params.SoundBanks = (TArray<UAkAudioBank*>)SoundBanks;
    params.SynchronizeSoundBanks = (bool)SynchronizeSoundBanks;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SoundBanks = params.SoundBanks;
}
bool UAkGameplayStatics::IsEditor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.IsEditor"));
    struct Params_IsEditor {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsEditor params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAkGameplayStatics::IsGame(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.IsGame"));
    struct Params_IsGame {
        UObject* WorldContextObject; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsGame params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAkGameplayStatics::GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, FString DeviceShareset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.GetSpeakerAngles"));
    struct Params_GetSpeakerAngles {
        TArray<float> SpeakerAngles; // 0x0
        float HeightAngle; // 0x10
        char pad_14[0x4];
        FString DeviceShareset; // 0x18
    }; // Size: 0x28
    Params_GetSpeakerAngles params{};
    params.SpeakerAngles = (TArray<float>)SpeakerAngles;
    params.HeightAngle = (float)HeightAngle;
    params.DeviceShareset = (FString)DeviceShareset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SpeakerAngles = params.SpeakerAngles;
    HeightAngle = params.HeightAngle;
}
float UAkGameplayStatics::GetOcclusionScalingFactor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.GetOcclusionScalingFactor"));
    struct Params_GetOcclusionScalingFactor {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetOcclusionScalingFactor params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UAkGameplayStatics::GetRTPCValue(UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, AActor* Actor, FName RTPC) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.GetRTPCValue"));
    struct Params_GetRTPCValue {
        UAkRtpc* RTPCValue; // 0x0
        int32_t PlayingID; // 0x8
        ERTPCValueType InputValueType; // 0xc
        char pad_d[0x3];
        float Value; // 0x10
        ERTPCValueType OutputValueType; // 0x14
        char pad_15[0x3];
        AActor* Actor; // 0x18
        FName RTPC; // 0x20
    }; // Size: 0x28
    Params_GetRTPCValue params{};
    params.RTPCValue = (UAkRtpc*)RTPCValue;
    params.PlayingID = (int32_t)PlayingID;
    params.InputValueType = (ERTPCValueType)InputValueType;
    params.Value = (float)Value;
    params.OutputValueType = (ERTPCValueType)OutputValueType;
    params.Actor = (AActor*)Actor;
    params.RTPC = (FName)RTPC;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
    OutputValueType = params.OutputValueType;
}
void UAkGameplayStatics::ExecuteActionOnEvent(UAkAudioEvent* AkEvent, AkActionOnEventType ActionType, AActor* Actor, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve, int32_t PlayingID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameplayStatics.ExecuteActionOnEvent"));
    struct Params_ExecuteActionOnEvent {
        UAkAudioEvent* AkEvent; // 0x0
        AkActionOnEventType ActionType; // 0x8
        char pad_9[0x7];
        AActor* Actor; // 0x10
        int32_t TransitionDuration; // 0x18
        EAkCurveInterpolation FadeCurve; // 0x1c
        char pad_1d[0x3];
        int32_t PlayingID; // 0x20
    }; // Size: 0x24
    Params_ExecuteActionOnEvent params{};
    params.AkEvent = (UAkAudioEvent*)AkEvent;
    params.ActionType = (AkActionOnEventType)ActionType;
    params.Actor = (AActor*)Actor;
    params.TransitionDuration = (int32_t)TransitionDuration;
    params.FadeCurve = (EAkCurveInterpolation)FadeCurve;
    params.PlayingID = (int32_t)PlayingID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAkGameplayStatics::CancelEventCallback() {}
