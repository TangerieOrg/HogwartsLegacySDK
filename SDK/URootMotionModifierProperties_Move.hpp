#pragma once
#include <cstdint>
#include "EMoveDirectionRule\Type.hpp"
#include "EMoveInterpRule\Type.hpp"
#include "EMoveMaxSpeedRule\Type.hpp"
#include "EMoveMinSpeedRule\Type.hpp"
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_Move : public URootMotionModifierProperties {
public:
    EMoveDirectionRule::Type MoveDirectionRule; // 0x30
    EMoveMinSpeedRule::Type MoveMinSpeedRule; // 0x31
    EMoveMaxSpeedRule::Type MoveMaxSpeedRule; // 0x32
    EMoveInterpRule::Type MoveInterpRule; // 0x33
    bool bNegateDirection; // 0x34
    char pad_35[0x3];
    float FixedMinSpeed; // 0x38
    float FixedMaxSpeed; // 0x3c
    float InterpSpeed; // 0x40
    bool bOverrideWalkSpeed; // 0x44
    char pad_45[0x3];
    float WalkSpeedOverride; // 0x48
    bool bEnabled; // 0x4c
    char pad_4d[0x3];
    static URootMotionModifierProperties_Move* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
