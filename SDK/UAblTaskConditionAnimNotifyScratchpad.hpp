#pragma once
#include <cstdint>
#include "UAblTaskConditionScratchpad.hpp"
class UAnimationAsset;
class UAblAbilityContext;
#pragma pack(push, 1)
class UAblTaskConditionAnimNotifyScratchpad : public UAblTaskConditionScratchpad {
public:
    char pad_30[0x58];
    bool bEventReceived; // 0x88
    bool bEventExists; // 0x89
    char pad_8a[0x6];
    static UAblTaskConditionAnimNotifyScratchpad* StaticClass();
    void OnAnimationPlayed(float InCurrentTime, UAnimationAsset* InAnimationAsset, UAblAbilityContext* Context);
}; // Size: 0x90
#pragma pack(pop)
