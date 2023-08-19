#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
class UAnimSequence;
#pragma pack(push, 1)
struct FFeatureVector : public FTableRowBase {
    UAnimSequence* AnimSequence; // 0x8
    float Time; // 0x10
    FVector Velocity; // 0x14
    FVector Position33; // 0x20
    FVector2D FacingDir33; // 0x2c
    FVector Position66; // 0x34
    FVector2D FacingDir66; // 0x40
    FVector Position99; // 0x48
    FVector2D FacingDir99; // 0x54
    FVector LeftFootPosition; // 0x5c
    FVector LeftFootVelocity; // 0x68
    FVector RightFootPosition; // 0x74
    FVector RightFootVelocity; // 0x80
    char pad_8c[0x4];
}; // Size: 0x90
#pragma pack(pop)
