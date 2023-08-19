#pragma once
#include <cstdint>
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarLerp : public UFXAutoTriggerScalar {
public:
    UFXAutoTriggerScalar* A; // 0x28
    UFXAutoTriggerScalar* B; // 0x30
    UFXAutoTriggerScalar* Alpha; // 0x38
    static UFXAutoTriggerScalarLerp* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
