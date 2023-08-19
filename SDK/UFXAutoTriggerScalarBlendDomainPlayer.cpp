#include "FRenderSettingsPreComputedBlendDomainName.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarBlendDomainPlayer.hpp"
UFXAutoTriggerScalarBlendDomainPlayer* UFXAutoTriggerScalarBlendDomainPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarBlendDomainPlayer");
    return (UFXAutoTriggerScalarBlendDomainPlayer*)res;
}
