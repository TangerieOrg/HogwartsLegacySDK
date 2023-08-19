#include "FBox.hpp"
#include "UObject.hpp"
#include "UWorldFXOctree.hpp"
#include "UWorldFXOctreeFX.hpp"
UWorldFXOctree* UWorldFXOctree::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXOctree");
    return (UWorldFXOctree*)res;
}
