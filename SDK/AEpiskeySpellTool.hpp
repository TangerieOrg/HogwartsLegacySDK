#pragma once
#include <cstdint>
#include "ASpellTool.hpp"
#pragma pack(push, 1)
class AEpiskeySpellTool : public ASpellTool {
public:
    float HealingAmount; // 0x7f0
    float Radius; // 0x7f4
    static AEpiskeySpellTool* StaticClass();
}; // Size: 0x7f8
#pragma pack(pop)
