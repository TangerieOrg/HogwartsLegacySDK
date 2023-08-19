#include "UEnvQueryGenerator.hpp"
#include "UEnvQueryGenerator_StationsOwned.hpp"
UEnvQueryGenerator_StationsOwned* UEnvQueryGenerator_StationsOwned::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryGenerator_StationsOwned");
    return (UEnvQueryGenerator_StationsOwned*)res;
}
