#include "FInputContextWithType.hpp"
#include "FStencilManagerEffectName.hpp"
#include "UAISenseConfig.hpp"
#include "UAISenseConfig_Cognition.hpp"
#include "UCogGroupBestTargetProcess.hpp"
UAISenseConfig_Cognition* UAISenseConfig_Cognition::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.AISenseConfig_Cognition");
    return (UAISenseConfig_Cognition*)res;
}
