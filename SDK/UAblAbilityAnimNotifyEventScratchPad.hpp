#pragma once
#include <cstdint>
#include "UAblAbilityEventScratchPad.hpp"
class UAnimationAsset;
class UAblAbilityContext;
#pragma pack(push, 1)
class UAblAbilityAnimNotifyEventScratchPad : public UAblAbilityEventScratchPad {
public:
    static UAblAbilityAnimNotifyEventScratchPad* StaticClass();
    void OnAnimationPlayed(float InCurrentTime, UAnimationAsset* InAnimationAsset, UAblAbilityContext* Context);
}; // Size: 0x48
#pragma pack(pop)
