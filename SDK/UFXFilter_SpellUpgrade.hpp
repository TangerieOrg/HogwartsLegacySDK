#pragma once
#include <cstdint>
#include "ESpellUpgrades.hpp"
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_SpellUpgrade : public UFXFilter {
public:
    ESpellUpgrades SpellUpgrade; // 0x30
    char pad_31[0x7];
    static UFXFilter_SpellUpgrade* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
