#include "UWorldFXRuleIsOvercast.hpp"
#include "UWorldFXRuleOvercast.hpp"
UWorldFXRuleIsOvercast* UWorldFXRuleIsOvercast::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleIsOvercast");
    return (UWorldFXRuleIsOvercast*)res;
}
