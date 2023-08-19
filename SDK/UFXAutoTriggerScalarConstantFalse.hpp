#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarConstantFalse : public UFXAutoTriggerBool {
public:
    static UFXAutoTriggerScalarConstantFalse* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
