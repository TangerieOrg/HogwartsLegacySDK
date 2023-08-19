#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_TagCooldown : public UBTDecorator {
public:
    FGameplayTag CooldownTag; // 0x68
    float CooldownDuration; // 0x70
    bool bAddToExistingDuration; // 0x74
    bool bActivatesCooldown; // 0x75
    char pad_76[0x2];
    static UBTDecorator_TagCooldown* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
