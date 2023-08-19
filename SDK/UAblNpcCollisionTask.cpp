#include "ECollisionResponse.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblNpcCollisionTask.hpp"
UAblNpcCollisionTask* UAblNpcCollisionTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcCollisionTask");
    return (UAblNpcCollisionTask*)res;
}
