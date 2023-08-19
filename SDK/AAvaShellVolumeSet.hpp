#pragma once
#include <cstdint>
#include "AAvaStreamingVolumeSet.hpp"
class AActor;
class ATriggerBox;
class ULevelStreamingDynamic;
#pragma pack(push, 1)
class AAvaShellVolumeSet : public AAvaStreamingVolumeSet {
public:
    char pad_268[0x28];
    AActor* LevelPlacementActor; // 0x290
    ATriggerBox* VolumeToIntersectAgainsStreamingVolumes; // 0x298
    ULevelStreamingDynamic* LoadedLevel; // 0x2a0
    static AAvaShellVolumeSet* StaticClass();
}; // Size: 0x2a8
#pragma pack(pop)
