#pragma once
#include <cstdint>
#include "UDuelTechnique.hpp"
#pragma pack(push, 1)
class UDuelTechnique_SpellEffectMultiple : public UDuelTechnique {
public:
    char pad_48[0x28];
    static UDuelTechnique_SpellEffectMultiple* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
