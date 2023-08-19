#include "UEnvQueryGenerator_ActorsOfClass.hpp"
#include "UEnvQueryGenerator_StationsNearby.hpp"
UEnvQueryGenerator_StationsNearby* UEnvQueryGenerator_StationsNearby::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryGenerator_StationsNearby");
    return (UEnvQueryGenerator_StationsNearby*)res;
}
