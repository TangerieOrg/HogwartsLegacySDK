#include "UEnemy_Cover_QBUpdate.hpp"
#include "UEnemy_QBUpdate.hpp"
#include "UEnvQuery.hpp"
UEnemy_Cover_QBUpdate* UEnemy_Cover_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Cover_QBUpdate");
    return (UEnemy_Cover_QBUpdate*)res;
}
