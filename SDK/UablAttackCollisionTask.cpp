#include "AttackCollisionType.hpp"
#include "UAblAbilityTask.hpp"
#include "UablAttackCollisionTask.hpp"
UablAttackCollisionTask* UablAttackCollisionTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablAttackCollisionTask");
    return (UablAttackCollisionTask*)res;
}
