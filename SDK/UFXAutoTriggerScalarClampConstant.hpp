#pragma once
#include <cstdint>
#include "UFXAutoTriggerScalarSingleParam.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarClampConstant : public UFXAutoTriggerScalarSingleParam {
public:
    float Minimum; // 0x30
    float Maximum; // 0x34
    static UFXAutoTriggerScalarClampConstant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
