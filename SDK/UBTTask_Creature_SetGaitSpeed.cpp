#include "ECreatureMovementSpeed.hpp"
#include "ECreaturePathEndMode.hpp"
#include "ECreatureStoppingMode.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_SetGaitSpeed.hpp"
UBTTask_Creature_SetGaitSpeed* UBTTask_Creature_SetGaitSpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_SetGaitSpeed");
    return (UBTTask_Creature_SetGaitSpeed*)res;
}
