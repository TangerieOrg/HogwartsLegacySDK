#include "UDW_Taunt_Dragon_AttackChoice.hpp"
#include "UEnemy_AttackChoice.hpp"
UDW_Taunt_Dragon_AttackChoice* UDW_Taunt_Dragon_AttackChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DW_Taunt_Dragon_AttackChoice");
    return (UDW_Taunt_Dragon_AttackChoice*)res;
}
