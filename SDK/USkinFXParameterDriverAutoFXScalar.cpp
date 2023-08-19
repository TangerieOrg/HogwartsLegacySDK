#include "FRemapScalarRange.hpp"
#include "FSkinFXMaterialScalarProperty.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "USkinFXParameterDriver.hpp"
#include "USkinFXParameterDriverAutoFXScalar.hpp"
USkinFXParameterDriverAutoFXScalar* USkinFXParameterDriverAutoFXScalar::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SkinFXParameterDriverAutoFXScalar");
    return (USkinFXParameterDriverAutoFXScalar*)res;
}
