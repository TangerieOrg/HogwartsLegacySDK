#include "ELumosContactShadows.hpp"
#include "ULumosScalabilityModifyShadows.hpp"
#include "ULumosScalabilityModifyWithRule.hpp"
ULumosScalabilityModifyShadows* ULumosScalabilityModifyShadows::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilityModifyShadows");
    return (ULumosScalabilityModifyShadows*)res;
}
