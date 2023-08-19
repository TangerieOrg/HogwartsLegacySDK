#include "ULumosScalabilityOverrideBase.hpp"
#include "UObject.hpp"
ULumosScalabilityOverrideBase* ULumosScalabilityOverrideBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilityOverrideBase");
    return (ULumosScalabilityOverrideBase*)res;
}
