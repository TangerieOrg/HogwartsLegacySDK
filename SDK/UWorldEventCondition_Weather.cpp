#include "FWeatherDefinitionName.hpp"
#include "UWorldEventCondition.hpp"
#include "UWorldEventCondition_Weather.hpp"
UWorldEventCondition_Weather* UWorldEventCondition_Weather::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventCondition_Weather");
    return (UWorldEventCondition_Weather*)res;
}
