#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_SetTagCooldown : public UBTTaskNode {
public:
    FGameplayTag CooldownTag; // 0x70
    bool bAddToExistingDuration; // 0x78
    char pad_79[0x3];
    float CooldownDuration; // 0x7c
    static UBTTask_SetTagCooldown* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
