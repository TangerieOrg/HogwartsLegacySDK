#include "UWorldFXRuleNotOvercast.hpp"
#include "UWorldFXRuleOvercast.hpp"
UWorldFXRuleNotOvercast* UWorldFXRuleNotOvercast::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleNotOvercast");
    return (UWorldFXRuleNotOvercast*)res;
}
