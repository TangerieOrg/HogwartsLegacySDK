#include "UEnemy_QBUpdate.hpp"
#include "UEnemy_Reposition_QBUpdate.hpp"
UEnemy_Reposition_QBUpdate* UEnemy_Reposition_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Reposition_QBUpdate");
    return (UEnemy_Reposition_QBUpdate*)res;
}
