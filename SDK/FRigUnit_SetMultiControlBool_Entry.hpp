#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRigUnit_SetMultiControlBool_Entry {
    FName Control; // 0x0
    bool BoolValue; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
