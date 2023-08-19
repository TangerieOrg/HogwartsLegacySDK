#pragma once
#include <cstdint>
#include "FInterpCurveFloat.hpp"
#include "UInterpTrack.hpp"
#pragma pack(push, 1)
class UInterpTrackFloatBase : public UInterpTrack {
public:
    FInterpCurveFloat FloatTrack; // 0x70
    float CurveTension; // 0x88
    char pad_8c[0x4];
    static UInterpTrackFloatBase* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
