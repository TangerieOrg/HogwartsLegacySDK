#include "FEnemy_AttackGroup.hpp"
#include "UEnemy_Manager.hpp"
#include "UNPC_Manager.hpp"
UEnemy_Manager* UEnemy_Manager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Manager");
    return (UEnemy_Manager*)res;
}
