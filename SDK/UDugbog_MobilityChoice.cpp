#include "UDugbog_MobilityChoice.hpp"
#include "UNPC_MobilityChoice.hpp"
UDugbog_MobilityChoice* UDugbog_MobilityChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Dugbog_MobilityChoice");
    return (UDugbog_MobilityChoice*)res;
}
