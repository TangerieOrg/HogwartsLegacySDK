#pragma once
#include <cstdint>
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarClamp : public UFXAutoTriggerScalar {
public:
    UFXAutoTriggerScalar* Value; // 0x28
    UFXAutoTriggerScalar* Minimum; // 0x30
    UFXAutoTriggerScalar* Maximum; // 0x38
    static UFXAutoTriggerScalarClamp* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
