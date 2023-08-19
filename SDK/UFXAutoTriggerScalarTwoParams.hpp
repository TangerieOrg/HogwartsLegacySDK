#pragma once
#include <cstdint>
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarTwoParams : public UFXAutoTriggerScalar {
public:
    UFXAutoTriggerScalar* A; // 0x28
    UFXAutoTriggerScalar* B; // 0x30
    static UFXAutoTriggerScalarTwoParams* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
