#include "UNPC_GameEvent_PerceptionUpdate.hpp"
#include "UNPC_PerceptionUpdate.hpp"
UNPC_GameEvent_PerceptionUpdate* UNPC_GameEvent_PerceptionUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_GameEvent_PerceptionUpdate");
    return (UNPC_GameEvent_PerceptionUpdate*)res;
}
