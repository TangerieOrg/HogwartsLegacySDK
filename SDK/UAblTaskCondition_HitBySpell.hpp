#pragma once
#include <cstdint>
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblTaskCondition_HitBySpell : public UAblTaskCondition {
public:
    FName SpellName; // 0x28
    static UAblTaskCondition_HitBySpell* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
