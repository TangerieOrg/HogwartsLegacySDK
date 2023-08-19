#pragma once
#include <cstdint>
#include "UFXAutoTriggerScalarTwoParams.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarDivide : public UFXAutoTriggerScalarTwoParams {
public:
    float DivideByZero; // 0x38
    char pad_3c[0x4];
    static UFXAutoTriggerScalarDivide* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
