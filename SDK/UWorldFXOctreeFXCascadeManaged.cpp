#include "UWorldFXOctreeFX.hpp"
#include "UWorldFXOctreeFXCascadeManaged.hpp"
UWorldFXOctreeFXCascadeManaged* UWorldFXOctreeFXCascadeManaged::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXOctreeFXCascadeManaged");
    return (UWorldFXOctreeFXCascadeManaged*)res;
}
