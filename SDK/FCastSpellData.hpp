#pragma once
#include <cstdint>
class USpellToolRecord;
#pragma pack(push, 1)
struct FCastSpellData {
    char pad_0[0x28];
    USpellToolRecord* SpellToolRecord; // 0x28
    char pad_30[0x18];
}; // Size: 0x48
#pragma pack(pop)
