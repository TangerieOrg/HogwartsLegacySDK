#pragma once
#include <cstdint>
#include "FRigUnit.hpp"
#pragma pack(push, 1)
struct FRigUnit_IsInteracting : public FRigUnit {
    bool bIsInteracting; // 0x8
    char pad_9[0x7];
}; // Size: 0x10
#pragma pack(pop)
