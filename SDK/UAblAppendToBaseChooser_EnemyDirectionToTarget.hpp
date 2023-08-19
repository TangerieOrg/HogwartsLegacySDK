#pragma once
#include <cstdint>
#include "UAblAnimationTagChooser_AppendToBaseChooser.hpp"
#pragma pack(push, 1)
class UAblAppendToBaseChooser_EnemyDirectionToTarget : public UAblAnimationTagChooser_AppendToBaseChooser {
public:
    int32_t MinFrontAngle; // 0x28
    int32_t MaxFrontAngle; // 0x2c
    int32_t MinLeftAngle; // 0x30
    int32_t MaxRightAngle; // 0x34
    static UAblAppendToBaseChooser_EnemyDirectionToTarget* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
