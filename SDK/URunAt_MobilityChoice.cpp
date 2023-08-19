#include "UNPC_MobilityChoice.hpp"
#include "URunAt_MobilityChoice.hpp"
URunAt_MobilityChoice* URunAt_MobilityChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RunAt_MobilityChoice");
    return (URunAt_MobilityChoice*)res;
}
