#include "UNPC_MobilityChoice.hpp"
#include "UObject.hpp"
UNPC_MobilityChoice* UNPC_MobilityChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_MobilityChoice");
    return (UNPC_MobilityChoice*)res;
}
