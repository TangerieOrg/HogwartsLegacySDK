#pragma once
#include <cstdint>
#include "EHighContrastDistanceType.hpp"
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolWithinHighContrastDistance : public UFXAutoTriggerBool {
public:
    EHighContrastDistanceType Type; // 0x28
    char pad_29[0x7];
    static UFXAutoTriggerBoolWithinHighContrastDistance* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
