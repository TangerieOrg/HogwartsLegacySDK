#include "UAkXB1InitializationSettings.hpp"
#include "UAkXboxOneGDKInitializationSettings.hpp"
UAkXB1InitializationSettings* UAkXB1InitializationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkXB1InitializationSettings");
    return (UAkXB1InitializationSettings*)res;
}
