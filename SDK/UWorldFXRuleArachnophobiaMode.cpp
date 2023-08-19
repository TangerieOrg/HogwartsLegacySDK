#include "UWorldFXRule.hpp"
#include "UWorldFXRuleArachnophobiaMode.hpp"
UWorldFXRuleArachnophobiaMode* UWorldFXRuleArachnophobiaMode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleArachnophobiaMode");
    return (UWorldFXRuleArachnophobiaMode*)res;
}
