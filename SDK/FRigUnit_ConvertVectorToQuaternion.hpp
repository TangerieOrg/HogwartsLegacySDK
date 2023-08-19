#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit {
    FVector Input; // 0x8
    char pad_14[0xc];
    FQuat Result; // 0x20
}; // Size: 0x30
#pragma pack(pop)
