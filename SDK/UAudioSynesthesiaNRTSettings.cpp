#include "UAudioAnalyzerNRTSettings.hpp"
#include "UAudioSynesthesiaNRTSettings.hpp"
UAudioSynesthesiaNRTSettings* UAudioSynesthesiaNRTSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioSynesthesia.AudioSynesthesiaNRTSettings");
    return (UAudioSynesthesiaNRTSettings*)res;
}
