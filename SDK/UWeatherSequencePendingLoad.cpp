#include "ULiveWeatherSequenceInfo.hpp"
#include "UWeatherSequencePendingLoad.hpp"
UWeatherSequencePendingLoad* UWeatherSequencePendingLoad::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherSequencePendingLoad");
    return (UWeatherSequencePendingLoad*)res;
}
