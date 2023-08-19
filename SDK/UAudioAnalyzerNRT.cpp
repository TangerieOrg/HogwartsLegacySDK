#include "UAudioAnalyzerAsset.hpp"
#include "UAudioAnalyzerNRT.hpp"
#include "USoundWave.hpp"
UAudioAnalyzerNRT* UAudioAnalyzerNRT::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioAnalyzer.AudioAnalyzerNRT");
    return (UAudioAnalyzerNRT*)res;
}
