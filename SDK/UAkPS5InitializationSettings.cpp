#include "FAkCommonInitializationSettings.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "FAkPS5AdvancedInitializationSettings.hpp"
#include "UAkPS5InitializationSettings.hpp"
#include "UObject.hpp"
UAkPS5InitializationSettings* UAkPS5InitializationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkPS5InitializationSettings");
    return (UAkPS5InitializationSettings*)res;
}
