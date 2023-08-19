#pragma once
#include <cstdint>
#include "FRigUnit_SimBase.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_KalmanTransform : public FRigUnit_SimBase {
    char pad_8[0x8];
    FTransform Value; // 0x10
    int32_t BufferSize; // 0x40
    char pad_44[0xc];
    FTransform Result; // 0x50
    TArray<FTransform> Buffer; // 0x80
    int32_t LastInsertIndex; // 0x90
    char pad_94[0xc];
}; // Size: 0xa0
#pragma pack(pop)
