#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UCurveVector;
#pragma pack(push, 1)
class UObjectScalingData : public UDataAsset {
public:
    uint8_t bGrowable : 1; // 0x30
    uint8_t bShrinkable : 1; // 0x30
    uint8_t pad_bitfield_30_2 : 6;
    char pad_31[0x7];
    UCurveVector* CurveScaleLarger; // 0x38
    UCurveVector* CurveScaleLargerOffset; // 0x40
    UCurveVector* CurveScaleLargerRotation; // 0x48
    UCurveVector* RestoreCurveScaleLarger; // 0x50
    UCurveVector* RestoreCurveScaleLargerOffset; // 0x58
    UCurveVector* RestoreCurveScaleLargerRotation; // 0x60
    UCurveVector* CurveScaleSmaller; // 0x68
    UCurveVector* CurveScaleSmallerOffset; // 0x70
    UCurveVector* CurveScaleSmallerRotation; // 0x78
    UCurveVector* RestoreCurveScaleSmaller; // 0x80
    UCurveVector* RestoreCurveScaleSmallerOffset; // 0x88
    UCurveVector* RestoreCurveScaleSmallerRotation; // 0x90
    static UObjectScalingData* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
