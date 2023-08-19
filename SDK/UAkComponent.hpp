#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FLatentActionInfo.hpp"
#include "FMasterTickThrottlerSettings.hpp"
#include "UAkGameObject.hpp"
class UAkAuxBus;
class UAkSwitchValue;
class UAkTrigger;
class UAkAudioEvent;
#pragma pack(push, 1)
class UAkComponent : public UAkGameObject {
public:
    bool bUseSpatialAudio; // 0x240
    char pad_241[0x7];
    ECollisionChannel OcclusionCollisionChannel; // 0x248
    char pad_249[0x3];
    uint8_t EnableSpotReflectors : 1; // 0x24c
    uint8_t pad_bitfield_24c_1 : 7;
    char pad_24d[0x3];
    float OuterRadius; // 0x250
    float InnerRadius; // 0x254
    UAkAuxBus* EarlyReflectionAuxBus; // 0x258
    FString EarlyReflectionAuxBusName; // 0x260
    int32_t EarlyReflectionOrder; // 0x270
    float EarlyReflectionBusSendGain; // 0x274
    float EarlyReflectionMaxPathLength; // 0x278
    float roomReverbAuxBusGain; // 0x27c
    int32_t diffractionMaxEdges; // 0x280
    int32_t diffractionMaxPaths; // 0x284
    float diffractionMaxPathLength; // 0x288
    uint8_t DrawFirstOrderReflections : 1; // 0x28c
    uint8_t DrawSecondOrderReflections : 1; // 0x28c
    uint8_t DrawHigherOrderReflections : 1; // 0x28c
    uint8_t DrawDiffraction : 1; // 0x28c
    uint8_t pad_bitfield_28c_4 : 4;
    char pad_28d[0x3];
    bool StopWhenOwnerDestroyed; // 0x290
    char pad_291[0x3];
    float AttenuationScalingFactor; // 0x294
    float OcclusionRefreshInterval; // 0x298
    char pad_29c[0x8c];
    int32_t OcclusionSecondaryTracePoints; // 0x328
    bool bSkipOcclusionCalculation; // 0x32c
    bool bSpawnedByAnimNotify; // 0x32d
    bool bUseReverbVolumes; // 0x32e
    char pad_32f[0x79];
    bool bComputeDoppler; // 0x3a8
    char pad_3a9[0x7];
    FMasterTickThrottlerSettings TickThrottlerSettings; // 0x3b0
    char pad_3d8[0x248];
    static UAkComponent* StaticClass();
    void UseReverbVolumes(bool inUseReverbVolumes);
    void UseEarlyReflections(UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName);
    void SetWantsOnUpdateTransform(bool bInWantsOnUpdateTranform);
    void SetSwitchPropagating(UAkSwitchValue* SwitchValue, FString SwitchGroup, FString SwitchState);
    void SetSwitch(UAkSwitchValue* SwitchValue, FString SwitchGroup, FString SwitchState);
    void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
    void SetOutputBusVolume(float BusVolume);
    void SetListeners(TArray<UAkComponent*>& Listeners);
    void SetGameObjectRadius(float in_outerRadius, float in_innerRadius);
    void SetEarlyReflectionsVolume(float SendVolume);
    void SetEarlyReflectionsAuxBus(FString AuxBusName);
    void SetAttenuationScalingFactor(float Value);
    void PostTrigger(UAkTrigger* TriggerValue, FString Trigger);
    void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    int32_t PostAssociatedAkEventAndWaitForEnd(TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    int32_t PostAkEventByName(FString in_EventName);
    void PostAkEventAndWaitForEndAsync(UAkAudioEvent* AkEvent, int32_t& PlayingID, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    int32_t PostAkEventAndWaitForEnd(UAkAudioEvent* AkEvent, FString in_EventName, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    void OcclusionRefreshStackSetDefault(float RefreshInterval);
    void OcclusionRefreshStackRemove(int32_t StackHandle);
    int32_t OcclusionRefreshStackAdd(float RefreshInterval, int32_t Priority);
    void MasterTickThrottlerSetNoTickRadius(float NoTickRadiusMeters);
    float GetAttenuationRadius();
}; // Size: 0x620
#pragma pack(pop)
