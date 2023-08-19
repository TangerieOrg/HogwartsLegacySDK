#pragma once
#include <cstdint>
#include "FKey.hpp"
#include "UAblAbilityEventScratchPad.hpp"
class UAblAbility;
#pragma pack(push, 1)
class UAblBranchEventScratchPad : public UAblAbilityEventScratchPad {
public:
    UAblAbility* BranchAbility; // 0x48
    TArray<FKey> CachedKeys; // 0x50
    static UAblBranchEventScratchPad* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
