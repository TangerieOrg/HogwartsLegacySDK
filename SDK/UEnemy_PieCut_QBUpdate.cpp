#include "UEnemy_PieCut_QBUpdate.hpp"
#include "UEnemy_QBUpdate.hpp"
UEnemy_PieCut_QBUpdate* UEnemy_PieCut_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_PieCut_QBUpdate");
    return (UEnemy_PieCut_QBUpdate*)res;
}
