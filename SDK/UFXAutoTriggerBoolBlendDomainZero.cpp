#include "FRenderSettingsPreComputedBlendDomainName.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolBlendDomainZero.hpp"
UFXAutoTriggerBoolBlendDomainZero* UFXAutoTriggerBoolBlendDomainZero::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolBlendDomainZero");
    return (UFXAutoTriggerBoolBlendDomainZero*)res;
}
