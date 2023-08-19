#include "ENPC_Mobility.hpp"
#include "UForced_MobilityChoice.hpp"
#include "UNPC_MobilityChoice.hpp"
UForced_MobilityChoice* UForced_MobilityChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Forced_MobilityChoice");
    return (UForced_MobilityChoice*)res;
}
