#include "UDW_Replicant_AttackChoice_GameChanger.hpp"
#include "UEnemy_AttackChoice.hpp"
UDW_Replicant_AttackChoice_GameChanger* UDW_Replicant_AttackChoice_GameChanger::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DW_Replicant_AttackChoice_GameChanger");
    return (UDW_Replicant_AttackChoice_GameChanger*)res;
}
