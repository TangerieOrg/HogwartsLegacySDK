#include "UNPC_MobilityChoice.hpp"
#include "USpiderRunAt_MobilityChoice.hpp"
USpiderRunAt_MobilityChoice* USpiderRunAt_MobilityChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpiderRunAt_MobilityChoice");
    return (USpiderRunAt_MobilityChoice*)res;
}
