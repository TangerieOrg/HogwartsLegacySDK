#include "UWorldFXRuleArachnophobiaMode.hpp"
#include "UWorldFXRuleNotArachnophobiaMode.hpp"
UWorldFXRuleNotArachnophobiaMode* UWorldFXRuleNotArachnophobiaMode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleNotArachnophobiaMode");
    return (UWorldFXRuleNotArachnophobiaMode*)res;
}
