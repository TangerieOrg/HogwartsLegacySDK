#pragma once
#include <cstdint>
#include "UFXAutoTriggerScalar.hpp"
class UFXAutoTriggerBool;
#pragma pack(push, 1)
class UFXAutoTriggerScalarFromBoolSelect : public UFXAutoTriggerScalar {
public:
    UFXAutoTriggerBool* Condition; // 0x28
    UFXAutoTriggerScalar* TrueValue; // 0x30
    UFXAutoTriggerScalar* FalseValue; // 0x38
    static UFXAutoTriggerScalarFromBoolSelect* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
