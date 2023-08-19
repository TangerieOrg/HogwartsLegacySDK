#include "UEnemy_QBUpdate.hpp"
#include "UEnemy_TooClose_QBUpdate.hpp"
UEnemy_TooClose_QBUpdate* UEnemy_TooClose_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_TooClose_QBUpdate");
    return (UEnemy_TooClose_QBUpdate*)res;
}
