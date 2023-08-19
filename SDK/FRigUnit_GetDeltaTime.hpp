#pragma once
#include <cstdint>
#include "FRigUnit_AnimBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_GetDeltaTime : public FRigUnit_AnimBase {
    float Result; // 0x8
    char pad_c[0x4];
}; // Size: 0x10
#pragma pack(pop)
