#include "UEnemy_Combat_QBUpdate.hpp"
#include "UEnemy_QBUpdate.hpp"
UEnemy_Combat_QBUpdate* UEnemy_Combat_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Combat_QBUpdate");
    return (UEnemy_Combat_QBUpdate*)res;
}
