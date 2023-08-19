#include "AWeatherPhasedPresetVolume.hpp"
#include "AWeatherPresetVolumeBase.hpp"
#include "FWeatherPhasedPresetEntry.hpp"
#include "FWeatherSeasonsFilter.hpp"
#include "UFunction.hpp"
void AWeatherPhasedPresetVolume::IsValidActiveWeatherPhase(FName PhaseName, FWeatherSeasonsFilter& ValidSeasons) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherPhasedPresetVolume.IsValidActiveWeatherPhase"));
    struct Params_IsValidActiveWeatherPhase {
        FName PhaseName; // 0x0
        FWeatherSeasonsFilter ValidSeasons; // 0x8
    }; // Size: 0xc
    Params_IsValidActiveWeatherPhase params{};
    params.PhaseName = (FName)PhaseName;
    params.ValidSeasons = (FWeatherSeasonsFilter)ValidSeasons;
    ProcessEvent(func, &params);
    ValidSeasons = params.ValidSeasons;
}
AWeatherPhasedPresetVolume* AWeatherPhasedPresetVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherPhasedPresetVolume");
    return (AWeatherPhasedPresetVolume*)res;
}
void AWeatherPhasedPresetVolume::SetActiveWeatherPhase(FName PhaseName, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherPhasedPresetVolume.SetActiveWeatherPhase"));
    struct Params_SetActiveWeatherPhase {
        FName PhaseName; // 0x0
        bool bSuccess; // 0x8
    }; // Size: 0x9
    Params_SetActiveWeatherPhase params{};
    params.PhaseName = (FName)PhaseName;
    params.bSuccess = (bool)bSuccess;
    ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void AWeatherPhasedPresetVolume::IsValidActiveWeatherPhaseCurrentSeason(FName PhaseName, bool& bValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherPhasedPresetVolume.IsValidActiveWeatherPhaseCurrentSeason"));
    struct Params_IsValidActiveWeatherPhaseCurrentSeason {
        FName PhaseName; // 0x0
        bool bValid; // 0x8
    }; // Size: 0x9
    Params_IsValidActiveWeatherPhaseCurrentSeason params{};
    params.PhaseName = (FName)PhaseName;
    params.bValid = (bool)bValid;
    ProcessEvent(func, &params);
    bValid = params.bValid;
}
