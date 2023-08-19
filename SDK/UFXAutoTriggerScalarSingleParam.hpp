#pragma once
#include <cstdint>
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarSingleParam : public UFXAutoTriggerScalar {
public:
    UFXAutoTriggerScalar* Value; // 0x28
    static UFXAutoTriggerScalarSingleParam* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
