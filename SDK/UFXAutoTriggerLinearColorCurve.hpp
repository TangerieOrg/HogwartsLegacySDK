#pragma once
#include <cstdint>
#include "UFXAutoTriggerLinearColor.hpp"
class UCurveLinearColor;
class UFXAutoTriggerScalar;
#pragma pack(push, 1)
class UFXAutoTriggerLinearColorCurve : public UFXAutoTriggerLinearColor {
public:
    UCurveLinearColor* Curve; // 0x28
    UFXAutoTriggerScalar* XAxis; // 0x30
    static UFXAutoTriggerLinearColorCurve* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
