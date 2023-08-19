#pragma once
#include <cstdint>
#include "EDirectionType\Type.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_DirectionBased : public UAblAnimationTagChooser {
public:
    int32_t NumAngles; // 0x50
    bool bWrapAngles; // 0x54
    bool bSetFixedToDesiredDirection; // 0x55
    bool bLeftFootAtEndOfList; // 0x56
    char pad_57[0x1];
    int32_t NumSpeeds; // 0x58
    bool bUseFootPlacement; // 0x5c
    EDirectionType::Type DirectionType; // 0x5d
    bool bDebugDraw; // 0x5e
    char pad_5f[0x1];
    static UAblAnimationTagChooser_DirectionBased* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
