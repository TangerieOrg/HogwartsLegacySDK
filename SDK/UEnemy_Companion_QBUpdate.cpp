#include "UEnemy_Companion_QBUpdate.hpp"
#include "UEnemy_QBUpdate.hpp"
UEnemy_Companion_QBUpdate* UEnemy_Companion_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Companion_QBUpdate");
    return (UEnemy_Companion_QBUpdate*)res;
}
