#include "ULerpVolumeAudioFadeInterpolant.hpp"
#include "ULerpVolumeInterpolant.hpp"
ULerpVolumeAudioFadeInterpolant* ULerpVolumeAudioFadeInterpolant::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LerpVolumeAudioFadeInterpolant");
    return (ULerpVolumeAudioFadeInterpolant*)res;
}
