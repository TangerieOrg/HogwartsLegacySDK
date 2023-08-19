#include "UObject.hpp"
#include "UWorldFXOctree.hpp"
#include "UWorldFXOctreeFX.hpp"
#include "UWorldFXRule.hpp"
UWorldFXOctreeFX* UWorldFXOctreeFX::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXOctreeFX");
    return (UWorldFXOctreeFX*)res;
}
