#include "ARenderSettingsExposureSpeedTransitionVolume.hpp"
#include "ARenderSettingsPostProcessingVolume.hpp"
#include "UCurveFloat.hpp"
ARenderSettingsExposureSpeedTransitionVolume* ARenderSettingsExposureSpeedTransitionVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsExposureSpeedTransitionVolume");
    return (ARenderSettingsExposureSpeedTransitionVolume*)res;
}
