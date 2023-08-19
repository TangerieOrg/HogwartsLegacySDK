#pragma once
#include <cstdint>
#include "EInteractionProject.hpp"
#include "UAblTaskCondition.hpp"
class UInteractionArchitectAsset;
#pragma pack(push, 1)
class UAblTaskCondition_InteractionArchitectChild : public UAblTaskCondition {
public:
    UInteractionArchitectAsset* Parent; // 0x28
    bool bIncludeSelf; // 0x30
    EInteractionProject Project; // 0x31
    char pad_32[0x6];
    static UAblTaskCondition_InteractionArchitectChild* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
