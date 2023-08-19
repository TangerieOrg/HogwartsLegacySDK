#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_SetTagCooldown : public UBTDecorator {
public:
    FGameplayTag CooldownTag; // 0x68
    float CooldownDuration; // 0x70
    bool bAddToExistingDuration; // 0x74
    char pad_75[0x3];
    static UBTDecorator_SetTagCooldown* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
