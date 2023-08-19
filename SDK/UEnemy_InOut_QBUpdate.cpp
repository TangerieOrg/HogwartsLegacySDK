#include "UEnemy_InOut_QBUpdate.hpp"
#include "UEnemy_QBUpdate.hpp"
UEnemy_InOut_QBUpdate* UEnemy_InOut_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_InOut_QBUpdate");
    return (UEnemy_InOut_QBUpdate*)res;
}
