#include "UDistance_MobilityChoice.hpp"
#include "UNPC_MobilityChoice.hpp"
UDistance_MobilityChoice* UDistance_MobilityChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Distance_MobilityChoice");
    return (UDistance_MobilityChoice*)res;
}
