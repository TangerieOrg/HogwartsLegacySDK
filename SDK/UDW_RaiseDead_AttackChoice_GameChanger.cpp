#include "UDW_RaiseDead_AttackChoice_GameChanger.hpp"
#include "UEnemy_AttackChoice.hpp"
UDW_RaiseDead_AttackChoice_GameChanger* UDW_RaiseDead_AttackChoice_GameChanger::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DW_RaiseDead_AttackChoice_GameChanger");
    return (UDW_RaiseDead_AttackChoice_GameChanger*)res;
}
