#include "UEnemy_Alert_QBUpdate.hpp"
#include "UEnemy_QBUpdate.hpp"
UEnemy_Alert_QBUpdate* UEnemy_Alert_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Alert_QBUpdate");
    return (UEnemy_Alert_QBUpdate*)res;
}
