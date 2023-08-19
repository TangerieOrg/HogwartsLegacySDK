#pragma once
#include <cstdint>
#include "EMultiFXSpell.hpp"
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_Spell : public UFXFilter {
public:
    EMultiFXSpell SpellCondition; // 0x30
    char pad_31[0x7];
    static UFXFilter_Spell* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
