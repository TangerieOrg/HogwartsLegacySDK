#include "ESkinFXEffectEndStyle.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "USkinFXParameterDriverAutoTriggerBoolEndEffect.hpp"
#include "USkinFXParameterDriverEndEffect.hpp"
USkinFXParameterDriverAutoTriggerBoolEndEffect* USkinFXParameterDriverAutoTriggerBoolEndEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SkinFXParameterDriverAutoTriggerBoolEndEffect");
    return (USkinFXParameterDriverAutoTriggerBoolEndEffect*)res;
}
