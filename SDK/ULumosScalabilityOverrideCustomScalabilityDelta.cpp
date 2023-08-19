#include "EPhoenixScalabilityLevel.hpp"
#include "ULumosScalabilityOverrideCustomScalabilityDelta.hpp"
#include "ULumosScalabilityOverrideWithRule.hpp"
ULumosScalabilityOverrideCustomScalabilityDelta* ULumosScalabilityOverrideCustomScalabilityDelta::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilityOverrideCustomScalabilityDelta");
    return (ULumosScalabilityOverrideCustomScalabilityDelta*)res;
}
