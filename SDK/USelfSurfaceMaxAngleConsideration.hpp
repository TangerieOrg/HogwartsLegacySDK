#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfSurfaceMaxAngleConsideration : public UQualifierConsideration {
public:
    float MaxAngle; // 0x28
    char pad_2c[0x4];
    static USelfSurfaceMaxAngleConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
