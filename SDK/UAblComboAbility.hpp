#pragma once
#include <cstdint>
#include "UAblAbility.hpp"
class USpellToolRecord;
#pragma pack(push, 1)
class UAblComboAbility : public UAblAbility {
public:
    USpellToolRecord* ComboSpellToolRecord; // 0xc8
    static UAblComboAbility* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
