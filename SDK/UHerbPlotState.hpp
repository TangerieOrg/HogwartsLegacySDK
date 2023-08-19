#pragma once
#include <cstdint>
#include "EHerbGrowthState.hpp"
#include "FTimespan.hpp"
#include "UObject.hpp"
class AHerbPlot;
#pragma pack(push, 1)
class UHerbPlotState : public UObject {
public:
    char pad_28[0xd0];
    AHerbPlot* HerbPlotActor; // 0xf8
    char pad_100[0x18];
    static UHerbPlotState* StaticClass();
    bool IsGrowing();
    int32_t GetYield();
    float GetRegrowthTimeRatio();
    FName GetPlotID();
    FName GetPlantID();
    bool GetIsInSanctuary();
    FTimespan GetGrowthTimeRemaining();
    EHerbGrowthState GetGrowthState();
    float GetGrowthProgressRatio();
    FName GetFertilizerID();
}; // Size: 0x118
#pragma pack(pop)
