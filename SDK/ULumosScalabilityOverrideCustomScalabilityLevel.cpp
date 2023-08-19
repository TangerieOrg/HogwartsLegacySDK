#include "EPhoenixScalabilityLevel.hpp"
#include "ULumosScalabilityOverrideCustomScalabilityLevel.hpp"
#include "ULumosScalabilityOverrideWithRule.hpp"
ULumosScalabilityOverrideCustomScalabilityLevel* ULumosScalabilityOverrideCustomScalabilityLevel::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilityOverrideCustomScalabilityLevel");
    return (ULumosScalabilityOverrideCustomScalabilityLevel*)res;
}
