#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
class UFXAutoTriggerScalar;
#pragma pack(push, 1)
class UFXAutoTriggerBoolScalarParam : public UFXAutoTriggerBool {
public:
    UFXAutoTriggerScalar* Scalar; // 0x28
    static UFXAutoTriggerBoolScalarParam* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
