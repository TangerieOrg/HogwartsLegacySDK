#include "UAkDPXInitializationSettings.hpp"
#include "UAkPS5InitializationSettings.hpp"
UAkDPXInitializationSettings* UAkDPXInitializationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkDPXInitializationSettings");
    return (UAkDPXInitializationSettings*)res;
}
