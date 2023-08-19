#include "UAudioAnalyzerAsset.hpp"
#include "UAudioAnalyzerNRTSettings.hpp"
UAudioAnalyzerNRTSettings* UAudioAnalyzerNRTSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioAnalyzer.AudioAnalyzerNRTSettings");
    return (UAudioAnalyzerNRTSettings*)res;
}
