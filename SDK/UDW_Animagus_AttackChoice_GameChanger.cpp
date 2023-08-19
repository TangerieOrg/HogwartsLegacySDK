#include "UDW_Animagus_AttackChoice_GameChanger.hpp"
#include "UEnemy_AttackChoice.hpp"
UDW_Animagus_AttackChoice_GameChanger* UDW_Animagus_AttackChoice_GameChanger::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DW_Animagus_AttackChoice_GameChanger");
    return (UDW_Animagus_AttackChoice_GameChanger*)res;
}
