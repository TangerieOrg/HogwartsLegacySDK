#include "UFXAutoTriggerBool.hpp"
#include "USkinFXParameterDriverAutoFXBoolMod.hpp"
#include "USkinFXParameterDriverMod.hpp"
USkinFXParameterDriverAutoFXBoolMod* USkinFXParameterDriverAutoFXBoolMod::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SkinFXParameterDriverAutoFXBoolMod");
    return (USkinFXParameterDriverAutoFXBoolMod*)res;
}
