#include "UNPC_QBUpdate.hpp"
#include "UNPC_Update.hpp"
UNPC_QBUpdate* UNPC_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_QBUpdate");
    return (UNPC_QBUpdate*)res;
}
