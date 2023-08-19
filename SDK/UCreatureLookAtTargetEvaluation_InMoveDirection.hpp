#pragma once
#include <cstdint>
#include "UCreatureLookAtTargetEvaluation_Bool.hpp"
#pragma pack(push, 1)
class UCreatureLookAtTargetEvaluation_InMoveDirection : public UCreatureLookAtTargetEvaluation_Bool {
public:
    float StopMaxHeadingAngle; // 0x30
    float WalkMaxHeadingAngle; // 0x34
    float JogMaxHeadingAngle; // 0x38
    float SprintMaxHeadingAngle; // 0x3c
    float FlyingMaxHeadingAngle; // 0x40
    char pad_44[0x4];
    static UCreatureLookAtTargetEvaluation_InMoveDirection* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
