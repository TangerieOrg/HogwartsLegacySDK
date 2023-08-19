#include "UAblAbilityTask.hpp"
#include "UAblNpcReactGravityTask.hpp"
#include "UClass.hpp"
UAblNpcReactGravityTask* UAblNpcReactGravityTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcReactGravityTask");
    return (UAblNpcReactGravityTask*)res;
}
