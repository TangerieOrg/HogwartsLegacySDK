#include "UEnemy_POI_QBUpdate.hpp"
#include "UEnemy_QBUpdate.hpp"
UEnemy_POI_QBUpdate* UEnemy_POI_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_POI_QBUpdate");
    return (UEnemy_POI_QBUpdate*)res;
}
