#include "UEnemy_Target_PerceptionUpdate.hpp"
#include "UNPC_PerceptionUpdate.hpp"
UEnemy_Target_PerceptionUpdate* UEnemy_Target_PerceptionUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Target_PerceptionUpdate");
    return (UEnemy_Target_PerceptionUpdate*)res;
}
