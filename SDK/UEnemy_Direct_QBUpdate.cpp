#include "UEnemy_Direct_QBUpdate.hpp"
#include "UEnemy_QBUpdate.hpp"
UEnemy_Direct_QBUpdate* UEnemy_Direct_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Direct_QBUpdate");
    return (UEnemy_Direct_QBUpdate*)res;
}
