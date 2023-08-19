#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_SetPhysicalMaterial.hpp"
#include "UPhysicalMaterial.hpp"
UMultiFX2_SetPhysicalMaterial* UMultiFX2_SetPhysicalMaterial::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_SetPhysicalMaterial");
    return (UMultiFX2_SetPhysicalMaterial*)res;
}
