#pragma once
#include <cstdint>
#include "AkActionOnEventType.hpp"
#include "AkChannelConfiguration.hpp"
#include "AkMultiPositionType.hpp"
#include "EAkCurveInterpolation.hpp"
#include "EAttachLocation\Type.hpp"
#include "ERTPCValueType.hpp"
#include "FAkChannelMask.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FLatentActionInfo.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "PanningRule.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
class UAkAuxBus;
class UAkStateValue;
class UAkAudioBank;
class UAkPortalComponent;
struct FAkOutputSettings;
class UAkAudioEvent;
class USceneComponent;
class UAkComponent;
class UObject;
class UAkMediaAsset;
class UAkSwitchValue;
class UAkRtpc;
class UAkTrigger;
class UClass;
class UAkAudioType;
#pragma pack(push, 1)
class UAkGameplayStatics : public UBlueprintFunctionLibrary {
public:
    static UAkGameplayStatics* StaticClass();
    static void UseReverbVolumes(bool inUseReverbVolumes, AActor* Actor);
    static void UseEarlyReflections(AActor* Actor, UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName);
    static void UnloadBankByName(FString BankName);
    static void UnloadBankAsync(UAkAudioBank* Bank);
    static void UnloadBank(UAkAudioBank* Bank, FString BankName, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
    static void StopProfilerCapture();
    static void StopOutputCapture();
    static void StopAllAmbientSounds(UObject* WorldContextObject);
    static void StopAll();
    static void StopActor(AActor* Actor);
    static void StartProfilerCapture(FString Filename);
    static void StartOutputCapture(FString Filename);
    static void StartAllAmbientSounds(UObject* WorldContextObject);
    static UAkComponent* SpawnAkComponentAtLocation(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, FString EventName, bool AutoDestroy);
    static void SetSwitch(UAkSwitchValue* SwitchValue, AActor* Actor, FName SwitchGroup, FName SwitchState);
    static void SetState(UAkStateValue* StateValue, FName stateGroup, FName State);
    static void SetSpeakerAngles(TArray<float>& SpeakerAngles, float HeightAngle, FString DeviceShareset);
    static void SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, AActor* Actor, FName RTPC);
    static void SetReflectionsOrder(int32_t Order, bool RefreshPaths);
    static void SetPortalToPortalObstruction(UAkPortalComponent* PortalComponent0, UAkPortalComponent* PortalComponent1, float ObstructionValue);
    static void SetPortalObstructionAndOcclusion(UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue);
    static void SetPanningRule(PanningRule PanRule);
    static void SetOutputBusVolume(float BusVolume, AActor* Actor);
    static void SetOcclusionScalingFactor(float ScalingFactor);
    static void SetOcclusionRefreshInterval(float RefreshInterval, AActor* Actor);
    static void SetMultiplePositions(UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    static void SetMultipleChannelMaskEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    static void SetMultipleChannelEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    static void SetGameObjectToPortalObstruction(UAkComponent* GameObjectAkComponent, UAkPortalComponent* PortalComponent, float ObstructionValue);
    static void SetDefaultOcclusionRefreshInterval(AActor* Actor, float RefreshInterval);
    static void SetCurrentAudioCultureAsync(FString AudioCulture);
    static void SetCurrentAudioCulture(FString AudioCulture, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
    static void SetBusConfig(FString BusName, AkChannelConfiguration ChannelConfiguration);
    static void ResetRTPCValue(UAkRtpc* RTPCValue, int32_t InterpolationTimeMs, AActor* Actor, FName RTPC);
    static void ReplaceMainOutput(FAkOutputSettings& MainOutputSettings);
    static void RemoveOcclusionRefreshFromStack(AActor* Actor, int32_t StackHandle);
    static void PostTrigger(UAkTrigger* TriggerValue, AActor* Actor, FName Trigger);
    static void PostEventByName(FString EventName, AActor* Actor, bool bStopWhenAttachedToDestroyed);
    static int32_t PostEventAttached(UAkAudioEvent* AkEvent, AActor* Actor, FName AttachPointName, bool bStopWhenAttachedToDestroyed, FString EventName);
    static void PostEventAtLocationByName(FString EventName, FVector Location, FRotator Orientation, UObject* WorldContextObject);
    static int32_t PostEventAtLocation(UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, FString EventName, UObject* WorldContextObject);
    static void PostEvent(UAkAudioEvent* AkEvent, AActor* Actor, int32_t CallbackMask);
    static void PostAndWaitForEndOfEventAsync(UAkAudioEvent* AkEvent, AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    static int32_t PostAndWaitForEndOfEvent(UAkAudioEvent* AkEvent, AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<FAkExternalSourceInfo>& ExternalSources, FString EventName, FLatentActionInfo LatentInfo);
    static void LoadInitBank();
    static void LoadBanks(TArray<UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);
    static void LoadBankByName(FString BankName);
    static void LoadBankAsync(UAkAudioBank* Bank);
    static void LoadBank(UAkAudioBank* Bank, FString BankName, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
    static bool IsGame(UObject* WorldContextObject);
    static bool IsEditor();
    static void GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, FString DeviceShareset);
    static void GetRTPCValue(UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, AActor* Actor, FName RTPC);
    static float GetOcclusionScalingFactor();
    static FString GetCurrentAudioCulture();
    static TArray<FString> GetAvailableAudioCultures();
    static UObject* GetAkMediaAssetUserData(UAkMediaAsset* Instance, UClass* Type);
    static UAkComponent* GetAkComponent(USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, EAttachLocation::Type LocationType);
    static UObject* GetAkAudioTypeUserData(UAkAudioType* Instance, UClass* Type);
    static void ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve);
    static void ExecuteActionOnEvent(UAkAudioEvent* AkEvent, AkActionOnEventType ActionType, AActor* Actor, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve, int32_t PlayingID);
    static void ClearBanks();
    static void CancelEventCallback();
    static void AddOutputCaptureMarker(FString MarkerText);
    static int32_t AddOcclusionRefreshToStack(AActor* Actor, float RefreshInterval, int32_t Priority);
}; // Size: 0x28
#pragma pack(pop)
