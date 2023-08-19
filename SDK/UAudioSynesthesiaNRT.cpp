#include "UAudioAnalyzerNRT.hpp"
#include "UAudioSynesthesiaNRT.hpp"
UAudioSynesthesiaNRT* UAudioSynesthesiaNRT::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioSynesthesia.AudioSynesthesiaNRT");
    return (UAudioSynesthesiaNRT*)res;
}
