#include "UDW_Summon_Reinforcements_AttackChoice.hpp"
#include "UEnemy_AttackChoice.hpp"
UDW_Summon_Reinforcements_AttackChoice* UDW_Summon_Reinforcements_AttackChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DW_Summon_Reinforcements_AttackChoice");
    return (UDW_Summon_Reinforcements_AttackChoice*)res;
}
