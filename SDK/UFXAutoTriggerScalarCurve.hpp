#pragma once
#include <cstdint>
#include "UFXAutoTriggerScalarSingleParam.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UFXAutoTriggerScalarCurve : public UFXAutoTriggerScalarSingleParam {
public:
    UCurveFloat* Curve; // 0x30
    static UFXAutoTriggerScalarCurve* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
