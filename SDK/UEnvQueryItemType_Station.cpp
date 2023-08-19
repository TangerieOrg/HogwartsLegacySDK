#include "UEnvQueryItemType.hpp"
#include "UEnvQueryItemType_Station.hpp"
UEnvQueryItemType_Station* UEnvQueryItemType_Station::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryItemType_Station");
    return (UEnvQueryItemType_Station*)res;
}
