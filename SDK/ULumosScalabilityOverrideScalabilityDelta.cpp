#include "EPhoenixScalabilityLevel.hpp"
#include "ULumosScalabilityOverrideScalabilityDelta.hpp"
#include "ULumosScalabilityOverrideWithRule.hpp"
ULumosScalabilityOverrideScalabilityDelta* ULumosScalabilityOverrideScalabilityDelta::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilityOverrideScalabilityDelta");
    return (ULumosScalabilityOverrideScalabilityDelta*)res;
}
