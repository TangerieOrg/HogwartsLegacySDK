#pragma once
#include <cstdint>
#include "FInterpCurveLinearColor.hpp"
#include "UInterpTrack.hpp"
#pragma pack(push, 1)
class UInterpTrackLinearColorBase : public UInterpTrack {
public:
    FInterpCurveLinearColor LinearColorTrack; // 0x70
    float CurveTension; // 0x88
    char pad_8c[0x4];
    static UInterpTrackLinearColorBase* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
