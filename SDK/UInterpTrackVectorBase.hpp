#pragma once
#include <cstdint>
#include "FInterpCurveVector.hpp"
#include "UInterpTrack.hpp"
#pragma pack(push, 1)
class UInterpTrackVectorBase : public UInterpTrack {
public:
    FInterpCurveVector VectorTrack; // 0x70
    float CurveTension; // 0x88
    char pad_8c[0x4];
    static UInterpTrackVectorBase* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
