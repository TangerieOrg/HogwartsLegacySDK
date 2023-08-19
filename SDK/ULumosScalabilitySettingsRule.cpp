#include "ULumosScalabilitySettingsRule.hpp"
#include "UObject.hpp"
ULumosScalabilitySettingsRule* ULumosScalabilitySettingsRule::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsRule");
    return (ULumosScalabilitySettingsRule*)res;
}
