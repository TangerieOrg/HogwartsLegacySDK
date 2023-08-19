#include "UWorldFXRuleNightDayThreshold.hpp"
#include "UWorldFXRuleNightThreshold.hpp"
UWorldFXRuleNightThreshold* UWorldFXRuleNightThreshold::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleNightThreshold");
    return (UWorldFXRuleNightThreshold*)res;
}
