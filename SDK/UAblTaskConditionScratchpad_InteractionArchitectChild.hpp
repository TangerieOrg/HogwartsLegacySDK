#pragma once
#include <cstdint>
#include "UAblTaskConditionScratchpad.hpp"
class UInteractionArchitectAsset;
#pragma pack(push, 1)
class UAblTaskConditionScratchpad_InteractionArchitectChild : public UAblTaskConditionScratchpad {
public:
    UInteractionArchitectAsset* InteractionArchitectAsset; // 0x30
    static UAblTaskConditionScratchpad_InteractionArchitectChild* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
