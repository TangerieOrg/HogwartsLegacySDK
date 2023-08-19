#include "UDugbog_AttackChoice_StealthAttack.hpp"
#include "UEnemy_AttackChoice.hpp"
UDugbog_AttackChoice_StealthAttack* UDugbog_AttackChoice_StealthAttack::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Dugbog_AttackChoice_StealthAttack");
    return (UDugbog_AttackChoice_StealthAttack*)res;
}
