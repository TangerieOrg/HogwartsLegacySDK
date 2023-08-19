#include "FRenderSettingsPreComputedBlendDomainName.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarBlendDomainEye.hpp"
UFXAutoTriggerScalarBlendDomainEye* UFXAutoTriggerScalarBlendDomainEye::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarBlendDomainEye");
    return (UFXAutoTriggerScalarBlendDomainEye*)res;
}
