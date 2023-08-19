#pragma once
#include <cstdint>
#include "EFootPlantEnum.hpp"
#include "FRichCurve.hpp"
#include "FVector.hpp"
#include "UCurveBase.hpp"
#pragma pack(push, 1)
class UCurveClip : public UCurveBase {
public:
    FRichCurve TimeToPhaseCurve; // 0x30
    FRichCurve PhaseToTimeCurve; // 0xb0
    FRichCurve FootPlantsCurve; // 0x130
    FRichCurve VelocityCurves[3]; // 0x1b0
    FRichCurve AccelerationCurves[3]; // 0x330
    static UCurveClip* StaticClass();
    FVector GetVelocity(float InTime);
    EFootPlantEnum GetFootPlants(float InTime);
    FVector GetAcceleration(float InTime);
}; // Size: 0x4b0
#pragma pack(pop)
