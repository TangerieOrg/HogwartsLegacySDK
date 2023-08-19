#include "FRenderSettingsPreComputedBlendDomainName.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolBlendDomainOne.hpp"
UFXAutoTriggerBoolBlendDomainOne* UFXAutoTriggerBoolBlendDomainOne::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolBlendDomainOne");
    return (UFXAutoTriggerBoolBlendDomainOne*)res;
}
