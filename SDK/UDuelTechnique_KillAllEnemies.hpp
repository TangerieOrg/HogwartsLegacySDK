#pragma once
#include <cstdint>
#include "UDuelTechnique.hpp"
#pragma pack(push, 1)
class UDuelTechnique_KillAllEnemies : public UDuelTechnique {
public:
    char pad_48[0x18];
    static UDuelTechnique_KillAllEnemies* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
