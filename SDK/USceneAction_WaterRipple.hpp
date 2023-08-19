#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_WaterRipple : public USceneRigObjectActionBase {
public:
    char pad_a0[0x50];
    float Radius; // 0xf0
    float IntensityMultiplier; // 0xf4
    FName SocketName; // 0xf8
    FRuntimeFloatCurve Intensity; // 0x100
    static USceneAction_WaterRipple* StaticClass();
}; // Size: 0x188
#pragma pack(pop)
