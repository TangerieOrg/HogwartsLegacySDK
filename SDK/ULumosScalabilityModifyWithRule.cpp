#include "ULumosScalabilityModifyBase.hpp"
#include "ULumosScalabilityModifyWithRule.hpp"
#include "ULumosScalabilitySettingsRule.hpp"
ULumosScalabilityModifyWithRule* ULumosScalabilityModifyWithRule::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilityModifyWithRule");
    return (ULumosScalabilityModifyWithRule*)res;
}
