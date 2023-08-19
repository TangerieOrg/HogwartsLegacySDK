#include "UEnemy_QBUpdate.hpp"
#include "UEnemy_Standby_QBUpdate.hpp"
UEnemy_Standby_QBUpdate* UEnemy_Standby_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Standby_QBUpdate");
    return (UEnemy_Standby_QBUpdate*)res;
}
