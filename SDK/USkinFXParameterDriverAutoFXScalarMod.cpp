#include "FRemapScalarRange.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "USkinFXParameterDriverAutoFXScalarMod.hpp"
#include "USkinFXParameterDriverMod.hpp"
USkinFXParameterDriverAutoFXScalarMod* USkinFXParameterDriverAutoFXScalarMod::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SkinFXParameterDriverAutoFXScalarMod");
    return (USkinFXParameterDriverAutoFXScalarMod*)res;
}
