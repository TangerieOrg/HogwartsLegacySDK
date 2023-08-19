#include "UWorldFXRule.hpp"
#include "UWorldFXRuleList.hpp"
UWorldFXRuleList* UWorldFXRuleList::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXRuleList");
    return (UWorldFXRuleList*)res;
}
