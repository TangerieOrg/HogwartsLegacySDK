#include "UEnemy_AttackChoice.hpp"
#include "USpiderSpawn_AttackChoice.hpp"
USpiderSpawn_AttackChoice* USpiderSpawn_AttackChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpiderSpawn_AttackChoice");
    return (USpiderSpawn_AttackChoice*)res;
}
