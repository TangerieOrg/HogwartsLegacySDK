#include "UDEPRECATED_PhysicalMaterialPropertyBase.hpp"
#include "UObject.hpp"
UDEPRECATED_PhysicalMaterialPropertyBase* UDEPRECATED_PhysicalMaterialPropertyBase::StaticClass() {
    static auto res = find_uobject("Class /Script/PhysicsCore.PhysicalMaterialPropertyBase");
    return (UDEPRECATED_PhysicalMaterialPropertyBase*)res;
}
