#pragma once
#include <cstdint>
#include "UFXAutoTriggerScalarSingleParam.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarInvert : public UFXAutoTriggerScalarSingleParam {
public:
    float DivideByZero; // 0x30
    char pad_34[0x4];
    static UFXAutoTriggerScalarInvert* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
