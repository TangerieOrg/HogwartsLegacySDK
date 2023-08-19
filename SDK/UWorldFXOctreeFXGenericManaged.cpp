#include "FWorldFXGenericManageSettings.hpp"
#include "UWorldFXOctreeFX.hpp"
#include "UWorldFXOctreeFXGenericManaged.hpp"
UWorldFXOctreeFXGenericManaged* UWorldFXOctreeFXGenericManaged::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXOctreeFXGenericManaged");
    return (UWorldFXOctreeFXGenericManaged*)res;
}
