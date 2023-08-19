#pragma once
#include <cstdint>
class USpellToolRecord;
#pragma pack(push, 1)
struct FSpellLoadOut {
    TArray<USpellToolRecord*> SpellToolRecords; // 0x0
}; // Size: 0x10
#pragma pack(pop)
