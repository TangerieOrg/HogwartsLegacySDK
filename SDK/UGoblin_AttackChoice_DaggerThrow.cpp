#include "UEnemy_AttackChoice.hpp"
#include "UGoblin_AttackChoice_DaggerThrow.hpp"
UGoblin_AttackChoice_DaggerThrow* UGoblin_AttackChoice_DaggerThrow::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Goblin_AttackChoice_DaggerThrow");
    return (UGoblin_AttackChoice_DaggerThrow*)res;
}
