#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UTargetTracker;
#pragma pack(push, 1)
class UAblTargetTrackerTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    UTargetTracker* TargetTracker; // 0x28
    static UAblTargetTrackerTaskScratchPad* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
