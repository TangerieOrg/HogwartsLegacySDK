#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblTargetingBase.hpp"
#pragma pack(push, 1)
class UAblTargetingBox : public UAblTargetingBase {
public:
    FVector m_HalfExtents; // 0x78
    char pad_84[0x4];
    static UAblTargetingBox* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
