#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FGameplayTagContainer.hpp"
#include "FWorldEventTimeSpan.hpp"
class UWorldEventCondition;
class UWorldEventSocketComponent;
#pragma pack(push, 1)
class AWorldEventLocationActor : public AActor {
public:
    char pad_248[0x10];
    TArray<UWorldEventCondition*> LoadedConditions; // 0x258
    char pad_268[0x10];
    FGameplayTagContainer locationDescriptors; // 0x278
    int32_t PercentChanceOfBeingSelected; // 0x298
    float StreamInDistance; // 0x29c
    float StreamOutDistance; // 0x2a0
    char pad_2a4[0x4];
    TArray<void*> Conditions; // 0x2a8
    bool bOverrideDefaultCooldown; // 0x2b8
    bool bInfiniteCooldown; // 0x2b9
    char pad_2ba[0x2];
    FWorldEventTimeSpan CooldownOverride; // 0x2bc
    bool bSpawnEventWithLevel; // 0x2cc
    bool bMissionCritical; // 0x2cd
    char pad_2ce[0x2];
    FString GuidString; // 0x2d0
    bool bDrawStreamingVolume; // 0x2e0
    bool bUseForcedWorldEventName; // 0x2e1
    char pad_2e2[0x2];
    FName ForcedWorldEventName; // 0x2e4
    bool bUseForcedWorldEventSubset; // 0x2ec
    char pad_2ed[0x3];
    FName ForcedWorldEventSubset; // 0x2f0
    char pad_2f8[0x20];
    TArray<void*> WorldEventSockets; // 0x318
    char pad_328[0x18];
    static AWorldEventLocationActor* StaticClass();
    bool UseForcedWorldEventSubset();
    bool UseForcedWorldEventName();
    void StreamingHandle();
    void SetLocatorName(FName& Name);
    UWorldEventSocketComponent* RequestSocket(FGameplayTagContainer& SocketDescriptors);
    void ReleaseAllSockets();
    void OnEventNaturalEnd();
    void MarkEventAsCompleted();
    int32_t GetPercentChanceOfBeingSelected();
    int32_t GetNumberOfSockets();
    FName GetLocatorName();
    FGameplayTagContainer GetLocationDescriptors();
    FName GetForcedWorldEventSubset();
    FName GetForcedWorldEventName();
    TArray<void*> GetConditions();
}; // Size: 0x340
#pragma pack(pop)
