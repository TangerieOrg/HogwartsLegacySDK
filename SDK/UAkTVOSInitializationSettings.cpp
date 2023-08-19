#include "FAkAdvancedInitializationSettings.hpp"
#include "FAkAudioSession.hpp"
#include "FAkCommonInitializationSettingsWithSampleRate.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "UAkTVOSInitializationSettings.hpp"
#include "UObject.hpp"
UAkTVOSInitializationSettings* UAkTVOSInitializationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkTVOSInitializationSettings");
    return (UAkTVOSInitializationSettings*)res;
}
