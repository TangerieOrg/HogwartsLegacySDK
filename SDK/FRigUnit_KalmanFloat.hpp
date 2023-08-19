#pragma once
#include <cstdint>
#include "FRigUnit_SimBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_KalmanFloat : public FRigUnit_SimBase {
    float Value; // 0x8
    int32_t BufferSize; // 0xc
    float Result; // 0x10
    char pad_14[0x4];
    TArray<float> Buffer; // 0x18
    int32_t LastInsertIndex; // 0x28
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
