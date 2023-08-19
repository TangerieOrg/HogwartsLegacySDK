#include "FSkinFXMaterialScalarProperty.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "USkinFXParameterDriver.hpp"
#include "USkinFXParameterDriverAutoFXBool.hpp"
USkinFXParameterDriverAutoFXBool* USkinFXParameterDriverAutoFXBool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SkinFXParameterDriverAutoFXBool");
    return (USkinFXParameterDriverAutoFXBool*)res;
}
