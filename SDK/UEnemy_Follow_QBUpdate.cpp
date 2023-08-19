#include "UEnemy_Follow_QBUpdate.hpp"
#include "UEnemy_QBUpdate.hpp"
UEnemy_Follow_QBUpdate* UEnemy_Follow_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Follow_QBUpdate");
    return (UEnemy_Follow_QBUpdate*)res;
}
