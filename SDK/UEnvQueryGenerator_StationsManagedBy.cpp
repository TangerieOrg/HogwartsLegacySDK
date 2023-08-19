#include "EStationSelectionMethod.hpp"
#include "UEnvQueryGenerator.hpp"
#include "UEnvQueryGenerator_StationsManagedBy.hpp"
UEnvQueryGenerator_StationsManagedBy* UEnvQueryGenerator_StationsManagedBy::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryGenerator_StationsManagedBy");
    return (UEnvQueryGenerator_StationsManagedBy*)res;
}
