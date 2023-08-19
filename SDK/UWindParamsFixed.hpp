#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "FWindParametersSampleTime.hpp"
#include "UWindParams.hpp"
class UWindGustController;
#pragma pack(push, 1)
class UWindParamsFixed : public UWindParams {
public:
    FName Name; // 0x28
    float Angle; // 0x30
    float Speed; // 0x34
    UWindGustController* WindGustController; // 0x38
    FWindParametersSampleTime SampleTime; // 0x40
    FRuntimeFloatCurve ModAngle; // 0x48
    FRuntimeFloatCurve ModSpeed; // 0xd0
    bool bLoopModAngle; // 0x158
    bool bLoopModSpeed; // 0x159
    char pad_15a[0x6];
    static UWindParamsFixed* StaticClass();
}; // Size: 0x160
#pragma pack(pop)
