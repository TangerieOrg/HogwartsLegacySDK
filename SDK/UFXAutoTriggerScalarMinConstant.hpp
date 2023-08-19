#pragma once
#include <cstdint>
#include "UFXAutoTriggerScalarSingleParam.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarMinConstant : public UFXAutoTriggerScalarSingleParam {
public:
    float Minimum; // 0x30
    char pad_34[0x4];
    static UFXAutoTriggerScalarMinConstant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
