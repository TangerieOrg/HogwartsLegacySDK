#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblCollisionShape.hpp"
#pragma pack(push, 1)
class UAblCollisionShapeBox : public UAblCollisionShape {
public:
    FVector m_HalfExtents; // 0x58
    char pad_64[0x4];
    static UAblCollisionShapeBox* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
