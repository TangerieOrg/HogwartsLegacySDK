#pragma once
#include <cstdint>
#include "UFXAutoTriggerScalar.hpp"
class UFXAutoTriggerBool;
#pragma pack(push, 1)
class UFXAutoTriggerScalarFromBool : public UFXAutoTriggerScalar {
public:
    UFXAutoTriggerBool* Condition; // 0x28
    float TrueValue; // 0x30
    float FalseValue; // 0x34
    static UFXAutoTriggerScalarFromBool* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
