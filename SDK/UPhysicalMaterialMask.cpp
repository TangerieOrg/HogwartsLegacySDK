#include "TextureAddress.hpp"
#include "UObject.hpp"
#include "UPhysicalMaterialMask.hpp"
UPhysicalMaterialMask* UPhysicalMaterialMask::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PhysicalMaterialMask");
    return (UPhysicalMaterialMask*)res;
}
