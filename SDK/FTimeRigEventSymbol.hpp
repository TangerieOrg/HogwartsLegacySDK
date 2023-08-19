#pragma once
#include <cstdint>
class UTimeRigEvent;
#pragma pack(push, 1)
struct FTimeRigEventSymbol {
    char pad_0[0x10];
    UTimeRigEvent* Event; // 0x10
}; // Size: 0x18
#pragma pack(pop)
