#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UCurveVector;
class UCurveFloat;
#pragma pack(push, 1)
class UCameraStackTransformCurveData : public UDataAsset {
public:
    UCurveVector* CameraLocationCurve; // 0x30
    UCurveVector* FocalPointCurve; // 0x38
    UCurveFloat* InversePitchCurve; // 0x40
    static UCameraStackTransformCurveData* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
