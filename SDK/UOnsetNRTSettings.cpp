#include "UAudioSynesthesiaNRTSettings.hpp"
#include "UOnsetNRTSettings.hpp"
UOnsetNRTSettings* UOnsetNRTSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioSynesthesia.OnsetNRTSettings");
    return (UOnsetNRTSettings*)res;
}
