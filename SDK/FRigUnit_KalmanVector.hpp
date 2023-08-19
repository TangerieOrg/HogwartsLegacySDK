#pragma once
#include <cstdint>
#include "FRigUnit_SimBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_KalmanVector : public FRigUnit_SimBase {
    FVector Value; // 0x8
    int32_t BufferSize; // 0x14
    FVector Result; // 0x18
    char pad_24[0x4];
    TArray<FVector> Buffer; // 0x28
    int32_t LastInsertIndex; // 0x38
    char pad_3c[0x4];
}; // Size: 0x40
#pragma pack(pop)
