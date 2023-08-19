#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit.hpp"
#pragma pack(push, 1)
struct FRigUnit_ToWorldSpace_Rotation : public FRigUnit {
    char pad_8[0x8];
    FQuat Rotation; // 0x10
    FQuat World; // 0x20
}; // Size: 0x30
#pragma pack(pop)
