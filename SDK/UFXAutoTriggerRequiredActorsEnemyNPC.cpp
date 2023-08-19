#include "UFXAutoTriggerRequiredActorsEnemyNPC.hpp"
#include "UFXAutoTriggerRequiredActorsNPC.hpp"
UFXAutoTriggerRequiredActorsEnemyNPC* UFXAutoTriggerRequiredActorsEnemyNPC::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerRequiredActorsEnemyNPC");
    return (UFXAutoTriggerRequiredActorsEnemyNPC*)res;
}
