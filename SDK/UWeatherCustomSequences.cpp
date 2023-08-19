#include "FWeatherSequenceCustom.hpp"
#include "UDataAsset.hpp"
#include "UWeatherCustomSequences.hpp"
UWeatherCustomSequences* UWeatherCustomSequences::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherCustomSequences");
    return (UWeatherCustomSequences*)res;
}
