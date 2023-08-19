#pragma once
#include <cstdint>
#include "UDuelTechnique.hpp"
#pragma pack(push, 1)
class UDuelTechnique_ImperiusKill : public UDuelTechnique {
public:
    char pad_48[0x8];
    static UDuelTechnique_ImperiusKill* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
