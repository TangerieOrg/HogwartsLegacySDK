#pragma once
#include <cstdint>
#include "EControlRigAnimEasingType.hpp"
#include "FRigUnit_AnimBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_AnimEasingType : public FRigUnit_AnimBase {
    EControlRigAnimEasingType Type; // 0x8
    char pad_9[0x7];
}; // Size: 0x10
#pragma pack(pop)
