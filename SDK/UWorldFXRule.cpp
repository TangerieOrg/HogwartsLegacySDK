#include "UObject.hpp"
#include "UWorldFXRule.hpp"
UWorldFXRule* UWorldFXRule::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXRule");
    return (UWorldFXRule*)res;
}
