#include "UEnemy_BackOnNav_QBUpdate.hpp"
#include "UEnemy_QBUpdate.hpp"
UEnemy_BackOnNav_QBUpdate* UEnemy_BackOnNav_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_BackOnNav_QBUpdate");
    return (UEnemy_BackOnNav_QBUpdate*)res;
}
