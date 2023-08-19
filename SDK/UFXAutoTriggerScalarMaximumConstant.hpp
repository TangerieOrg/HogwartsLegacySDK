#pragma once
#include <cstdint>
#include "UFXAutoTriggerScalarSingleParam.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarMaximumConstant : public UFXAutoTriggerScalarSingleParam {
public:
    float Maximum; // 0x30
    char pad_34[0x4];
    static UFXAutoTriggerScalarMaximumConstant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
