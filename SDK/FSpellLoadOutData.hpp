#pragma once
#include <cstdint>
#include "FSpellLoadOut.hpp"
class USpellToolRecord;
#pragma pack(push, 1)
struct FSpellLoadOutData {
    char pad_0[0x10];
    TArray<FSpellLoadOut> SpellLoadouts; // 0x10
    TArray<USpellToolRecord*> SpellFinishers; // 0x20
}; // Size: 0x30
#pragma pack(pop)
