#include "UNPCDistance_SpeedChoice.hpp"
#include "UNPC_MobilitySpeedChoice.hpp"
UNPCDistance_SpeedChoice* UNPCDistance_SpeedChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPCDistance_SpeedChoice");
    return (UNPCDistance_SpeedChoice*)res;
}
