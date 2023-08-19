#include "UDistanceTransition_MobilityChoice.hpp"
#include "UNPC_MobilityChoice.hpp"
UDistanceTransition_MobilityChoice* UDistanceTransition_MobilityChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DistanceTransition_MobilityChoice");
    return (UDistanceTransition_MobilityChoice*)res;
}
