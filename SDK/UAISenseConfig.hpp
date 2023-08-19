#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAISenseConfig : public UObject {
public:
    FColor DebugColor; // 0x28
    float MaxAge; // 0x2c
    uint8_t bStartsEnabled : 1; // 0x30
    uint8_t pad_bitfield_30_1 : 7;
    char pad_31[0x17];
    static UAISenseConfig* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
