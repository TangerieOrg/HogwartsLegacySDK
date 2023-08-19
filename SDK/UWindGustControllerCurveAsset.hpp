#pragma once
#include <cstdint>
#include "EWindGustCurveRemap.hpp"
#include "EWindGustSpeedOp.hpp"
#include "FVector2D.hpp"
#include "UWindGustController.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UWindGustControllerCurveAsset : public UWindGustController {
public:
    UCurveFloat* Curve; // 0x28
    float TimeScale; // 0x30
    FVector2D RemapRangeIn; // 0x34
    FVector2D RemapRangeOut; // 0x3c
    EWindGustCurveRemap CurveRemap; // 0x44
    EWindGustSpeedOp SpeedOp; // 0x45
    char pad_46[0x2];
    static UWindGustControllerCurveAsset* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
