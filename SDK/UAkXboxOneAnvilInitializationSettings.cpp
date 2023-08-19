#include "UAkXboxOneAnvilInitializationSettings.hpp"
#include "UAkXboxOneGDKInitializationSettings.hpp"
UAkXboxOneAnvilInitializationSettings* UAkXboxOneAnvilInitializationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkXboxOneAnvilInitializationSettings");
    return (UAkXboxOneAnvilInitializationSettings*)res;
}
