#pragma once
#include <cstdint>
#include "FCurveBuildingParams.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UCurveHelpersUnitTest : public UDataAsset {
public:
    FRuntimeFloatCurve Curve; // 0x30
    float MinValue; // 0xb8
    float MaxValue; // 0xbc
    FCurveBuildingParams Params; // 0xc0
    static UCurveHelpersUnitTest* StaticClass();
    void Update();
}; // Size: 0xd8
#pragma pack(pop)
