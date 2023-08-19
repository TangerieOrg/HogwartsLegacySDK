#include "UNPC_PerceptionUpdate.hpp"
#include "UNPC_Update.hpp"
UNPC_PerceptionUpdate* UNPC_PerceptionUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_PerceptionUpdate");
    return (UNPC_PerceptionUpdate*)res;
}
