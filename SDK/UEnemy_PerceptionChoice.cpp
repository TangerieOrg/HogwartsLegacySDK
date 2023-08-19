#include "UEnemy_PerceptionChoice.hpp"
#include "UNPC_PerceptionChoice.hpp"
UEnemy_PerceptionChoice* UEnemy_PerceptionChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_PerceptionChoice");
    return (UEnemy_PerceptionChoice*)res;
}
