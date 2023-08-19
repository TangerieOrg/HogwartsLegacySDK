#include "ULumosScalabilityModifyOverrides.hpp"
#include "ULumosScalabilityModifyWithRule.hpp"
ULumosScalabilityModifyOverrides* ULumosScalabilityModifyOverrides::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilityModifyOverrides");
    return (ULumosScalabilityModifyOverrides*)res;
}
