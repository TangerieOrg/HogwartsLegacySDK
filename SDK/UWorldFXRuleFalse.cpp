#include "UWorldFXRule.hpp"
#include "UWorldFXRuleFalse.hpp"
UWorldFXRuleFalse* UWorldFXRuleFalse::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXRuleFalse");
    return (UWorldFXRuleFalse*)res;
}
