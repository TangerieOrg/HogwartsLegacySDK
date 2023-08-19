#include "ELumosContactShadows.hpp"
#include "ULumosScalabilityModifyContactShadows.hpp"
#include "ULumosScalabilityModifyWithRule.hpp"
ULumosScalabilityModifyContactShadows* ULumosScalabilityModifyContactShadows::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilityModifyContactShadows");
    return (ULumosScalabilityModifyContactShadows*)res;
}
