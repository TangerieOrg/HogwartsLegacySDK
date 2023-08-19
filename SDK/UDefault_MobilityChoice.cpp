#include "UDefault_MobilityChoice.hpp"
#include "UNPC_MobilityChoice.hpp"
UDefault_MobilityChoice* UDefault_MobilityChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Default_MobilityChoice");
    return (UDefault_MobilityChoice*)res;
}
