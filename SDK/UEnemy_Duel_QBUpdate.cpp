#include "UEnemy_Duel_QBUpdate.hpp"
#include "UEnemy_QBUpdate.hpp"
UEnemy_Duel_QBUpdate* UEnemy_Duel_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Duel_QBUpdate");
    return (UEnemy_Duel_QBUpdate*)res;
}
