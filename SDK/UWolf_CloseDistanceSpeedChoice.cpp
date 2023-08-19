#include "UNPC_MobilitySpeedChoice.hpp"
#include "UWolf_CloseDistanceSpeedChoice.hpp"
UWolf_CloseDistanceSpeedChoice* UWolf_CloseDistanceSpeedChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Wolf_CloseDistanceSpeedChoice");
    return (UWolf_CloseDistanceSpeedChoice*)res;
}
