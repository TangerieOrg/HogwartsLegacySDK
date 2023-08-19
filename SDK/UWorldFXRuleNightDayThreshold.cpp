#include "UWorldFXRuleNightDay.hpp"
#include "UWorldFXRuleNightDayThreshold.hpp"
UWorldFXRuleNightDayThreshold* UWorldFXRuleNightDayThreshold::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleNightDayThreshold");
    return (UWorldFXRuleNightDayThreshold*)res;
}
