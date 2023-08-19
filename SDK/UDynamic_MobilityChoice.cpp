#include "ENPC_Mobility.hpp"
#include "UDynamic_MobilityChoice.hpp"
#include "UNPC_MobilityChoice.hpp"
UDynamic_MobilityChoice* UDynamic_MobilityChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Dynamic_MobilityChoice");
    return (UDynamic_MobilityChoice*)res;
}
