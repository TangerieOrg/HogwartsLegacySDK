#include "FLerpVolumesAudioStateGroupLocation.hpp"
#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeLevelAudioLocationNameInterpolant.hpp"
#include "ULerpVolumeLevelNameInterpolantBase.hpp"
ULerpVolumeLevelAudioLocationNameInterpolant* ULerpVolumeLevelAudioLocationNameInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeLevelAudioLocationNameInterpolant");
    return (ULerpVolumeLevelAudioLocationNameInterpolant*)res;
}
