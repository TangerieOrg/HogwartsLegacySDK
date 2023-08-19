#pragma once
#include <cstdint>
#include "UToolRecord.hpp"
#pragma pack(push, 1)
class USpellToolRecord : public UToolRecord {
public:
    char pad_50[0x28];
    FName AudioSwitchName; // 0x78
    char pad_80[0x18];
    static USpellToolRecord* StaticClass();
    void LoadComplete();
}; // Size: 0x98
#pragma pack(pop)
