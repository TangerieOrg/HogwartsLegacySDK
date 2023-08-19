#include "UEnemy_QBUpdate.hpp"
#include "UNPC_QBUpdate.hpp"
UEnemy_QBUpdate* UEnemy_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_QBUpdate");
    return (UEnemy_QBUpdate*)res;
}
