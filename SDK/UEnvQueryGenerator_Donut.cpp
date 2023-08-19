#include "FAIDataProviderFloatValue.hpp"
#include "FAIDataProviderIntValue.hpp"
#include "FEnvDirection.hpp"
#include "UClass.hpp"
#include "UEnvQueryGenerator_Donut.hpp"
#include "UEnvQueryGenerator_ProjectedPoints.hpp"
UEnvQueryGenerator_Donut* UEnvQueryGenerator_Donut::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryGenerator_Donut");
    return (UEnvQueryGenerator_Donut*)res;
}
