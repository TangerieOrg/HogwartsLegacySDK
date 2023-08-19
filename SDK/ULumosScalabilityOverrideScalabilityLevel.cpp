#include "EPhoenixScalabilityLevel.hpp"
#include "ULumosScalabilityOverrideScalabilityLevel.hpp"
#include "ULumosScalabilityOverrideWithRule.hpp"
ULumosScalabilityOverrideScalabilityLevel* ULumosScalabilityOverrideScalabilityLevel::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilityOverrideScalabilityLevel");
    return (ULumosScalabilityOverrideScalabilityLevel*)res;
}
