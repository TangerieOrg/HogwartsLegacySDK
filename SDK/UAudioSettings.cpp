#include "EMonoChannelUpmixMethod.hpp"
#include "EPanningMethod.hpp"
#include "EVoiceSampleRate.hpp"
#include "FAudioQualitySettings.hpp"
#include "FDefaultAudioBusSettings.hpp"
#include "FSoftObjectPath.hpp"
#include "FSoundDebugEntry.hpp"
#include "UAudioSettings.hpp"
#include "UDeveloperSettings.hpp"
#include "USoundClass.hpp"
#include "USoundConcurrency.hpp"
UAudioSettings* UAudioSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AudioSettings");
    return (UAudioSettings*)res;
}
