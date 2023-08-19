#pragma once
#include <cstdint>
#include "UDuelTechnique.hpp"
#pragma pack(push, 1)
class UDuelTechnique_Depulso : public UDuelTechnique {
public:
    char pad_48[0x8];
    static UDuelTechnique_Depulso* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
