#pragma once
#include <cstdint>
#include "FRigUnit.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_ToRigSpace_Location : public FRigUnit {
    FVector Location; // 0x8
    FVector Global; // 0x14
}; // Size: 0x20
#pragma pack(pop)
