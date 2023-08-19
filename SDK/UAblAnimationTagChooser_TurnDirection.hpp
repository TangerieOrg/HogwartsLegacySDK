#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UAblAnimationTagChooser.hpp"
class UTurnDirectionTagChooser_TargetDirectionGetter;
#pragma pack(push, 1)
class UAblAnimationTagChooser_TurnDirection : public UAblAnimationTagChooser {
public:
    TArray<FVector2D> AngleRanges; // 0x50
    UTurnDirectionTagChooser_TargetDirectionGetter* TargetDirectionGetter; // 0x60
    static UAblAnimationTagChooser_TurnDirection* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
