#include "UNPC_MobilityChoice.hpp"
#include "UPOI_MobilityChoice.hpp"
UPOI_MobilityChoice* UPOI_MobilityChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.POI_MobilityChoice");
    return (UPOI_MobilityChoice*)res;
}
