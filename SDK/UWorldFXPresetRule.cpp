#include "FWorldFXPresetRuleName.hpp"
#include "UWorldFXPresetRule.hpp"
#include "UWorldFXRule.hpp"
UWorldFXPresetRule* UWorldFXPresetRule::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXPresetRule");
    return (UWorldFXPresetRule*)res;
}
