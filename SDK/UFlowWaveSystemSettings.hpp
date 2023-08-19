#pragma once
#include <cstdint>
#include "FFlowWaveSystemSettingsData.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UFlowWaveSystemSettings : public UDataAsset {
public:
    FFlowWaveSystemSettingsData GlobalSettings; // 0x30
    TArray<FFlowWaveSystemSettingsData> PerLevelSettings; // 0x68
    static UFlowWaveSystemSettings* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
