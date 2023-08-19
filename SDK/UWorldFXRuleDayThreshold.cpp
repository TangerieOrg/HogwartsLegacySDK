#include "UWorldFXRuleDayThreshold.hpp"
#include "UWorldFXRuleNightDayThreshold.hpp"
UWorldFXRuleDayThreshold* UWorldFXRuleDayThreshold::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleDayThreshold");
    return (UWorldFXRuleDayThreshold*)res;
}
