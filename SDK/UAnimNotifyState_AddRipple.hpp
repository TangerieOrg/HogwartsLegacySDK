#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UAnimNotifyState.hpp"
#pragma pack(push, 1)
class UAnimNotifyState_AddRipple : public UAnimNotifyState {
public:
    char pad_30[0x50];
    float Radius; // 0x80
    float IntensityMultiplier; // 0x84
    FName SocketName; // 0x88
    FRuntimeFloatCurve IntensityCurve; // 0x90
    static UAnimNotifyState_AddRipple* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
