#include "FVector.hpp"
#include "UWorldFXOctreeFX.hpp"
#include "UWorldFXOctreeFXInterface.hpp"
UWorldFXOctreeFXInterface* UWorldFXOctreeFXInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXOctreeFXInterface");
    return (UWorldFXOctreeFXInterface*)res;
}
