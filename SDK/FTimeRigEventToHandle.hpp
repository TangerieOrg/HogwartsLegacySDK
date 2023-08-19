#pragma once
#include <cstdint>
class UTimeRigElementState;
#pragma pack(push, 1)
struct FTimeRigEventToHandle {
    UTimeRigElementState* ElementState; // 0x0
    FName EventName; // 0x8
    char pad_10[0x8];
}; // Size: 0x18
#pragma pack(pop)
