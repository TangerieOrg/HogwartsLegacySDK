#pragma once
#include <cstdint>
#include "AWeatherPresetVolumeBase.hpp"
#include "FWeatherPhasedPresetEntry.hpp"
struct FWeatherSeasonsFilter;
#pragma pack(push, 1)
class AWeatherPhasedPresetVolume : public AWeatherPresetVolumeBase {
public:
    TArray<FWeatherPhasedPresetEntry> Presets; // 0x2a8
    FName ActivePhase; // 0x2b8
    static AWeatherPhasedPresetVolume* StaticClass();
    void SetActiveWeatherPhase(FName PhaseName, bool& bSuccess);
    void IsValidActiveWeatherPhaseCurrentSeason(FName PhaseName, bool& bValid);
    void IsValidActiveWeatherPhase(FName PhaseName, FWeatherSeasonsFilter& ValidSeasons);
}; // Size: 0x2c0
#pragma pack(pop)
