#pragma once
#include <cstdint>
#include "FRigUnit.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_ToRigSpace_Transform : public FRigUnit {
    char pad_8[0x8];
    FTransform Transform; // 0x10
    FTransform Global; // 0x40
}; // Size: 0x70
#pragma pack(pop)
