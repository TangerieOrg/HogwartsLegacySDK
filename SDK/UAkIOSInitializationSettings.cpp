#include "FAkAdvancedInitializationSettings.hpp"
#include "FAkAudioSession.hpp"
#include "FAkCommonInitializationSettingsWithSampleRate.hpp"
#include "FAkCommunicationSettingsWithSystemInitialization.hpp"
#include "UAkIOSInitializationSettings.hpp"
#include "UObject.hpp"
UAkIOSInitializationSettings* UAkIOSInitializationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkIOSInitializationSettings");
    return (UAkIOSInitializationSettings*)res;
}
