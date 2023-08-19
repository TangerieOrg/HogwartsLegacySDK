#include "UEnemy_AttackChoice.hpp"
#include "UObject.hpp"
UEnemy_AttackChoice* UEnemy_AttackChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_AttackChoice");
    return (UEnemy_AttackChoice*)res;
}
