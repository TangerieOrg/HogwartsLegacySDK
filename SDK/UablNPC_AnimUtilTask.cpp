#include "EEnemy_Ability.hpp"
#include "UAblAbilityTask.hpp"
#include "UablNPC_AnimUtilTask.hpp"
UablNPC_AnimUtilTask* UablNPC_AnimUtilTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablNPC_AnimUtilTask");
    return (UablNPC_AnimUtilTask*)res;
}
