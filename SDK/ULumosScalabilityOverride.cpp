#include "ULumosScalabilityAsset.hpp"
#include "ULumosScalabilityOverride.hpp"
#include "ULumosScalabilityOverrideWithRule.hpp"
ULumosScalabilityOverride* ULumosScalabilityOverride::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilityOverride");
    return (ULumosScalabilityOverride*)res;
}
