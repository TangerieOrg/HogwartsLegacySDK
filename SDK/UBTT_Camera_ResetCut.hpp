#pragma once
#include <cstdint>
#include "ECameraStackResetType.hpp"
#include "FRotator.hpp"
#include "FVector2D.hpp"
#include "UBTT_Camera_Base.hpp"
#pragma pack(push, 1)
class UBTT_Camera_ResetCut : public UBTT_Camera_Base {
public:
    ECameraStackResetType ResetType; // 0x70
    char pad_71[0x3];
    FRotator FixedArmRotationValue; // 0x74
    FVector2D RotationOffset; // 0x80
    static UBTT_Camera_ResetCut* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
