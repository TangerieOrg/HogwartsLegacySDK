#pragma once
#include <cstdint>
#include "FAnimNotifyEvent.hpp"
#include "FRawCurveTracks.hpp"
#include "UAnimationAsset.hpp"
#pragma pack(push, 1)
class UAnimSequenceBase : public UAnimationAsset {
public:
    TArray<FAnimNotifyEvent> Notifies; // 0x80
    float SequenceLength; // 0x90
    float RateScale; // 0x94
    FRawCurveTracks RawCurveData; // 0x98
    static UAnimSequenceBase* StaticClass();
    float GetPlayLength();
}; // Size: 0xa8
#pragma pack(pop)
