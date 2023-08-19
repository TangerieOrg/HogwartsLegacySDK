#include "USkinFXParameterDriver.hpp"
#include "USkinFXParameterDriverEndEffect.hpp"
USkinFXParameterDriverEndEffect* USkinFXParameterDriverEndEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.SkinFXParameterDriverEndEffect");
    return (USkinFXParameterDriverEndEffect*)res;
}
