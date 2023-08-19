#include "UEnemy_QBUpdate.hpp"
#include "UEnemy_SwimToShore_QBUpdate.hpp"
UEnemy_SwimToShore_QBUpdate* UEnemy_SwimToShore_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_SwimToShore_QBUpdate");
    return (UEnemy_SwimToShore_QBUpdate*)res;
}
