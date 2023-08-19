#include "ULumosScalabilityModifyRadiusFactor.hpp"
#include "ULumosScalabilityModifyWithRule.hpp"
ULumosScalabilityModifyRadiusFactor* ULumosScalabilityModifyRadiusFactor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilityModifyRadiusFactor");
    return (ULumosScalabilityModifyRadiusFactor*)res;
}
