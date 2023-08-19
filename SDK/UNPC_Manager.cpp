#include "UNPC_Manager.hpp"
#include "UNPC_PerceptionUpdate.hpp"
#include "UNPC_QBUpdate.hpp"
#include "UObject.hpp"
UNPC_Manager* UNPC_Manager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_Manager");
    return (UNPC_Manager*)res;
}
