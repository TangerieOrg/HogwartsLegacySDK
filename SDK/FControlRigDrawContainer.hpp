#pragma once
#include <cstdint>
#include "FControlRigDrawInstruction.hpp"
#pragma pack(push, 1)
struct FControlRigDrawContainer {
    char pad_0[0x8];
    TArray<FControlRigDrawInstruction> Instructions; // 0x8
}; // Size: 0x18
#pragma pack(pop)
