#include "UNPC_MobilitySpeedChoice.hpp"
#include "UObject.hpp"
UNPC_MobilitySpeedChoice* UNPC_MobilitySpeedChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_MobilitySpeedChoice");
    return (UNPC_MobilitySpeedChoice*)res;
}
