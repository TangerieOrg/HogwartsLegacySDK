#include "UUAbleCreatureAttackHitboxTask.hpp"
#include "UablAttackHitboxTask.hpp"
UUAbleCreatureAttackHitboxTask* UUAbleCreatureAttackHitboxTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UAbleCreatureAttackHitboxTask");
    return (UUAbleCreatureAttackHitboxTask*)res;
}
