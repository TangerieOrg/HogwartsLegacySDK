#include "FRenderSettingsPreComputedBlendDomainName.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarBlendDomainActor.hpp"
UFXAutoTriggerScalarBlendDomainActor* UFXAutoTriggerScalarBlendDomainActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarBlendDomainActor");
    return (UFXAutoTriggerScalarBlendDomainActor*)res;
}
