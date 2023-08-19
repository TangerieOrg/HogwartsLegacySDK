#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAvaStreamingVolumeComponentBase.hpp"
class AActor;
class ULevelStreamingDynamic;
#pragma pack(push, 1)
class UAvaStreamingLevelVolumeComponentBase : public UAvaStreamingVolumeComponentBase {
public:
    char pad_260[0x20];
    AActor* LevelPlacementActor; // 0x280
    ULevelStreamingDynamic* LoadedLevel; // 0x288
    static UAvaStreamingLevelVolumeComponentBase* StaticClass();
    FRotator GetLevelRot();
    FVector GetLevelLoc();
}; // Size: 0x290
#pragma pack(pop)
