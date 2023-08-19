#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FTimeRigEventReference {
    char pad_0[0x30];
    FName Name; // 0x30
}; // Size: 0x38
#pragma pack(pop)
