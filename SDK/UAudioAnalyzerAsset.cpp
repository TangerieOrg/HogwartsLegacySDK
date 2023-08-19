#include "UAudioAnalyzerAsset.hpp"
#include "UObject.hpp"
UAudioAnalyzerAsset* UAudioAnalyzerAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioAnalyzer.AudioAnalyzerAsset");
    return (UAudioAnalyzerAsset*)res;
}
