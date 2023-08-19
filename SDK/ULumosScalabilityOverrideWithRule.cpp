#include "ULumosScalabilityOverrideBase.hpp"
#include "ULumosScalabilityOverrideWithRule.hpp"
#include "ULumosScalabilitySettingsRule.hpp"
ULumosScalabilityOverrideWithRule* ULumosScalabilityOverrideWithRule::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilityOverrideWithRule");
    return (ULumosScalabilityOverrideWithRule*)res;
}
