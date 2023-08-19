#include "AAkReverbVolume.hpp"
#include "AVolume.hpp"
#include "UAkAuxBus.hpp"
#include "UAkLateReverbComponent.hpp"
AAkReverbVolume* AAkReverbVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkReverbVolume");
    return (AAkReverbVolume*)res;
}
