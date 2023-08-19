#include "FVector.hpp"
#include "UWorldFXOctreeFX.hpp"
#include "UWorldFXOctreeFXDummy.hpp"
UWorldFXOctreeFXDummy* UWorldFXOctreeFXDummy::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXOctreeFXDummy");
    return (UWorldFXOctreeFXDummy*)res;
}
