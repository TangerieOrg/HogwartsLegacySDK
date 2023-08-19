#pragma once
#include <cstdint>
#include "UFXAutoTriggerLinearColor.hpp"
class UFXAutoTriggerScalar;
#pragma pack(push, 1)
class UFXAutoTriggerLinearScaleColor : public UFXAutoTriggerLinearColor {
public:
    UFXAutoTriggerLinearColor* Color; // 0x28
    UFXAutoTriggerScalar* Scale; // 0x30
    static UFXAutoTriggerLinearScaleColor* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
