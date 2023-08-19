#include "EFrictionCombineMode\Type.hpp"
#include "EPhysicalSurface.hpp"
#include "UDEPRECATED_PhysicalMaterialPropertyBase.hpp"
#include "UObject.hpp"
#include "UPhysicalMaterial.hpp"
UPhysicalMaterial* UPhysicalMaterial::StaticClass() {
    static auto res = find_uobject("Class /Script/PhysicsCore.PhysicalMaterial");
    return (UPhysicalMaterial*)res;
}
