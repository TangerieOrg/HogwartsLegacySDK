#include "ULumosScalabilityModifyBase.hpp"
#include "UObject.hpp"
ULumosScalabilityModifyBase* ULumosScalabilityModifyBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilityModifyBase");
    return (ULumosScalabilityModifyBase*)res;
}
