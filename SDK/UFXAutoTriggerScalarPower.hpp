#pragma once
#include <cstdint>
#include "UFXAutoTriggerScalarSingleParam.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarPower : public UFXAutoTriggerScalarSingleParam {
public:
    float Power; // 0x30
    char pad_34[0x4];
    static UFXAutoTriggerScalarPower* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
