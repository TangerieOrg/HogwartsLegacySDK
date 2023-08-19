#pragma once
#include <cstdint>
#include "FAlphaBlend.hpp"
#include "FRotator.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
class AActor;
#pragma pack(push, 1)
class UAblNPCTurnToTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    AActor* ActorToTrack; // 0x28
    FRotator TargetRotation; // 0x30
    char pad_3c[0x4];
    FAlphaBlend TurningBlend; // 0x40
    static UAblNPCTurnToTaskScratchPad* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
