#include "AAkSpatialAudioVolume.hpp"
#include "AVolume.hpp"
#include "UAkLateReverbComponent.hpp"
#include "UAkRoomComponent.hpp"
#include "UAkSurfaceReflectorSetComponent.hpp"
AAkSpatialAudioVolume* AAkSpatialAudioVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkSpatialAudioVolume");
    return (AAkSpatialAudioVolume*)res;
}
