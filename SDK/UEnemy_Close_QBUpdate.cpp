#include "UEnemy_Close_QBUpdate.hpp"
#include "UEnemy_QBUpdate.hpp"
UEnemy_Close_QBUpdate* UEnemy_Close_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Close_QBUpdate");
    return (UEnemy_Close_QBUpdate*)res;
}
