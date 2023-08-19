#pragma once
#include <cstdint>
#include "FCombatCursedData.hpp"
#include "UStateEffectComponent.hpp"
class UGameplayPropertyMod;
#pragma pack(push, 1)
class UCombatCursedComponent : public UStateEffectComponent {
public:
    FCombatCursedData Data; // 0x190
    char pad_1b0[0x10];
    UGameplayPropertyMod* ModAdded; // 0x1c0
    char pad_1c8[0x8];
    static UCombatCursedComponent* StaticClass();
}; // Size: 0x1d0
#pragma pack(pop)
