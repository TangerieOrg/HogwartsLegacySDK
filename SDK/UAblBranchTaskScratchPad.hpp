#pragma once
#include <cstdint>
#include "FKey.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
class UAnimationAsset;
class UAblAbilityContext;
#pragma pack(push, 1)
class UAblBranchTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    TArray<FKey> CachedKeys; // 0x28
    char pad_38[0x10];
    bool bEventReceived; // 0x48
    bool bEventExists; // 0x49
    bool bCanEverPassConditions; // 0x4a
    char pad_4b[0x5];
    static UAblBranchTaskScratchPad* StaticClass();
    void OnAnimationPlayed(float InCurrentTime, UAnimationAsset* InAnimationAsset, UAblAbilityContext* Context);
}; // Size: 0x50
#pragma pack(pop)
