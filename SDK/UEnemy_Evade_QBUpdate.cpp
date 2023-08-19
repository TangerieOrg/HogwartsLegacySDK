#include "UEnemy_Evade_QBUpdate.hpp"
#include "UEnemy_QBUpdate.hpp"
UEnemy_Evade_QBUpdate* UEnemy_Evade_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Evade_QBUpdate");
    return (UEnemy_Evade_QBUpdate*)res;
}
