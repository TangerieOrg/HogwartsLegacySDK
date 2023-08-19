#include "UNPC_PerceptionChoice.hpp"
#include "UObject.hpp"
UNPC_PerceptionChoice* UNPC_PerceptionChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_PerceptionChoice");
    return (UNPC_PerceptionChoice*)res;
}
