#include "FEnvTraceData.hpp"
#include "UEnvQueryGenerator.hpp"
#include "UEnvQueryGenerator_ProjectedPoints.hpp"
UEnvQueryGenerator_ProjectedPoints* UEnvQueryGenerator_ProjectedPoints::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryGenerator_ProjectedPoints");
    return (UEnvQueryGenerator_ProjectedPoints*)res;
}
