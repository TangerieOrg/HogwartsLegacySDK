#include "UWorldFXRuleOvercast.hpp"
#include "UWorldFXRuleRangedOvercast.hpp"
UWorldFXRuleRangedOvercast* UWorldFXRuleRangedOvercast::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleRangedOvercast");
    return (UWorldFXRuleRangedOvercast*)res;
}
