#include "ECreatureStance.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_SetStance.hpp"
UBTTask_Creature_SetStance* UBTTask_Creature_SetStance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_SetStance");
    return (UBTTask_Creature_SetStance*)res;
}
