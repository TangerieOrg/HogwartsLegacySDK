#include "AActor.hpp"
#include "AAkSpotReflector.hpp"
#include "UAkAcousticTexture.hpp"
#include "UAkAuxBus.hpp"
AAkSpotReflector* AAkSpotReflector::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkSpotReflector");
    return (AAkSpotReflector*)res;
}
