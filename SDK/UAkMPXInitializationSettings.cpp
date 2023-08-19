#include "UAkMPXInitializationSettings.hpp"
#include "UAkXSXInitializationSettings.hpp"
UAkMPXInitializationSettings* UAkMPXInitializationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkMPXInitializationSettings");
    return (UAkMPXInitializationSettings*)res;
}
