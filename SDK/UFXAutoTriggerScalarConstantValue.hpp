#pragma once
#include <cstdint>
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarConstantValue : public UFXAutoTriggerScalar {
public:
    float Value; // 0x28
    char pad_2c[0x4];
    static UFXAutoTriggerScalarConstantValue* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
