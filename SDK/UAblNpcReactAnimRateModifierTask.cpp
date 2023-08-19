#include "EAlphaBlendOption.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblNpcReactAnimRateModifierTask.hpp"
UAblNpcReactAnimRateModifierTask* UAblNpcReactAnimRateModifierTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcReactAnimRateModifierTask");
    return (UAblNpcReactAnimRateModifierTask*)res;
}
