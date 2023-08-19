#include "UWorldFXRuleList.hpp"
#include "UWorldFXRuleOr.hpp"
UWorldFXRuleOr* UWorldFXRuleOr::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXRuleOr");
    return (UWorldFXRuleOr*)res;
}
