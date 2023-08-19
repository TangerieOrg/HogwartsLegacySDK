#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FSanctuaryStreamingIslandDefinition.hpp"
class UObject;
#pragma pack(push, 1)
class ASanctuaryStreamingController : public AActor {
public:
    TArray<void*> GlobalLevels; // 0x248
    TArray<FSanctuaryStreamingIslandDefinition> Islands; // 0x258
    bool bTreatLightingLevelsAsMinimalLoad; // 0x268
    char pad_269[0x3];
    FName ActiveIsland; // 0x26c
    bool bTeleportLockActive; // 0x274
    char pad_275[0x14b];
    static ASanctuaryStreamingController* StaticClass();
    void UnlockLockForZone(FName ZoneName);
    void UnloadZoneExplicitly(FName ZoneName);
    void SetActiveIslandFromZone(FName InZoneName);
    void SetActiveIsland(FName InActiveIsland);
    static void RequestZoneReadyToEnter(UObject* WorldContextObject, FName ZoneName);
    void RequestZoneLoad(FName ZoneName, bool bMakeVisible, bool bIgnoreLock);
    void OnUpdateStreamingState();
    void MakeZoneVisible(FName ZoneName);
    bool IsZoneUnlocked(FName ZoneName);
    bool IsZoneReadyToEnter(FName ZoneName);
    bool IsZoneMinimumLoadVisible(FName ZoneName);
    bool IsZoneMinimumLoadComplete(FName ZoneName);
    bool IsZoneCompletelyVisible(FName ZoneName);
    void HideParallelLevelsInInactiveIslands();
    FName GetIslandForZone(FName InZoneName);
    static ASanctuaryStreamingController* Get(UObject* WorldContextObject);
    bool DoesZoneExist(FName ZoneName);
    void BlockingMinimalZoneLoad(FName ZoneName, bool bMakeVisible);
}; // Size: 0x3c0
#pragma pack(pop)
