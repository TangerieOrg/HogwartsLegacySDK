#pragma once
#include <cstdint>
#include "UDuelTechnique.hpp"
#pragma pack(push, 1)
class UDuelTechnique_NoHealthItem : public UDuelTechnique {
public:
    char pad_48[0x20];
    static UDuelTechnique_NoHealthItem* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
