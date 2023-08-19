#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblCollisionSweepShape.hpp"
#pragma pack(push, 1)
class UAblCollisionSweepBox : public UAblCollisionSweepShape {
public:
    FVector m_HalfExtents; // 0x58
    char pad_64[0x4];
    static UAblCollisionSweepBox* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
