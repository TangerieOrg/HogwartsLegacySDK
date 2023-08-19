#pragma once
#include <cstdint>
#include "EWandCastCommand\Type.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_WandCast : public UAblAnimationTagChooser {
public:
    FGameplayTagContainer TooCloseToEnemyTag; // 0x50
    float SpinMoveBlendTime; // 0x70
    float MeleeMoveBlendTime; // 0x74
    EWandCastCommand::Type WandCastCommand; // 0x78
    bool bSampleYawRemainingFromCurve; // 0x79
    char pad_7a[0x2];
    float YawRemainingSampleEndTime; // 0x7c
    static UAblAnimationTagChooser_WandCast* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
