#pragma once
#include <cstdint>
#include "UDuelTechnique.hpp"
#pragma pack(push, 1)
class UDuelTechnique_Damage : public UDuelTechnique {
public:
    char pad_48[0x10];
    static UDuelTechnique_Damage* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
