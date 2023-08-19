#include "UChaosPhysicalMaterial.hpp"
#include "UObject.hpp"
UChaosPhysicalMaterial* UChaosPhysicalMaterial::StaticClass() {
    static auto res = find_uobject("Class /Script/PhysicsCore.ChaosPhysicalMaterial");
    return (UChaosPhysicalMaterial*)res;
}
