#include "UEnemy_Around_QBUpdate.hpp"
#include "UEnemy_QBUpdate.hpp"
UEnemy_Around_QBUpdate* UEnemy_Around_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Around_QBUpdate");
    return (UEnemy_Around_QBUpdate*)res;
}
