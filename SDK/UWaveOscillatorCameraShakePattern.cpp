#include "FWaveOscillator.hpp"
#include "USimpleCameraShakePattern.hpp"
#include "UWaveOscillatorCameraShakePattern.hpp"
UWaveOscillatorCameraShakePattern* UWaveOscillatorCameraShakePattern::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayCameras.WaveOscillatorCameraShakePattern");
    return (UWaveOscillatorCameraShakePattern*)res;
}
