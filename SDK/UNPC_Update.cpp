#include "UNPC_Update.hpp"
#include "UObject.hpp"
UNPC_Update* UNPC_Update::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_Update");
    return (UNPC_Update*)res;
}
