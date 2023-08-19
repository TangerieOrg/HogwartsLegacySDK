#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfPitchAngleConsideration : public UQualifierConsideration {
public:
    float MaxAngle; // 0x28
    FName HeadBone; // 0x2c
    FName PelvisBone; // 0x34
    char pad_3c[0x4];
    static USelfPitchAngleConsideration* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
