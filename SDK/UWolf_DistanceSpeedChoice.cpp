#include "UNPC_MobilitySpeedChoice.hpp"
#include "UWolf_DistanceSpeedChoice.hpp"
UWolf_DistanceSpeedChoice* UWolf_DistanceSpeedChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Wolf_DistanceSpeedChoice");
    return (UWolf_DistanceSpeedChoice*)res;
}
