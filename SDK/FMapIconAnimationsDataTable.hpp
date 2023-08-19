#pragma once
#include <cstdint>
#include "EMapIconAnimationBinding.hpp"
#include "EMapIconAnimationLoopType.hpp"
#include "EMapIconAnimationSetType.hpp"
#include "FDataTableRowHandle.hpp"
#include "FTableRowBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMapIconAnimationsDataTable : public FTableRowBase {
    float AnimationTime; // 0x8
    EMapIconAnimationLoopType LoopType; // 0xc
    EMapIconAnimationBinding Binding; // 0xd
    EMapIconAnimationSetType SetType; // 0xe
    char pad_f[0x1];
    float LoopDelay; // 0x10
    bool LerpToColor; // 0x14
    char pad_15[0x3];
    FDataTableRowHandle TargetColor; // 0x18
    float OverlandScale; // 0x28
    float HogsmeadeScale; // 0x2c
    float HogwartsScale; // 0x30
    float ScalingMultiplier; // 0x34
    TArray<FVector> AnimationKeys; // 0x38
}; // Size: 0x48
#pragma pack(pop)
