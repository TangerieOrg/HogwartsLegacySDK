#pragma once
#include <cstdint>
#include "UCameraStackBehavior.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UCameraStackBehaviorSetDefaultPitch : public UCameraStackBehavior {
public:
    float DefaultPitch; // 0x50
    char pad_54[0x4];
    UCurveFloat* ResetCurve; // 0x58
    static UCameraStackBehaviorSetDefaultPitch* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
