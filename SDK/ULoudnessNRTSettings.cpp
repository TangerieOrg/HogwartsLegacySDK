#include "ELoudnessNRTCurveTypeEnum.hpp"
#include "UAudioSynesthesiaNRTSettings.hpp"
#include "ULoudnessNRTSettings.hpp"
ULoudnessNRTSettings* ULoudnessNRTSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioSynesthesia.LoudnessNRTSettings");
    return (ULoudnessNRTSettings*)res;
}
