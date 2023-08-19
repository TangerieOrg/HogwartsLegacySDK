#include "UEnemy_AttackChoice.hpp"
#include "UWolf_AttackChoice_BiteLeft.hpp"
UWolf_AttackChoice_BiteLeft* UWolf_AttackChoice_BiteLeft::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Wolf_AttackChoice_BiteLeft");
    return (UWolf_AttackChoice_BiteLeft*)res;
}
