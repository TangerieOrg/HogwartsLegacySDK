#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolSingleParam : public UFXAutoTriggerBool {
public:
    UFXAutoTriggerBool* Value; // 0x28
    static UFXAutoTriggerBoolSingleParam* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
