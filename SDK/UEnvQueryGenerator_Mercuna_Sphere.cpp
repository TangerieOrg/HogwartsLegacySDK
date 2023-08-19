#include "EMercunaPointDistribution.hpp"
#include "FAIDataProviderFloatValue.hpp"
#include "FAIDataProviderIntValue.hpp"
#include "UClass.hpp"
#include "UEnvQueryGenerator.hpp"
#include "UEnvQueryGenerator_Mercuna_Sphere.hpp"
UEnvQueryGenerator_Mercuna_Sphere* UEnvQueryGenerator_Mercuna_Sphere::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.EnvQueryGenerator_Mercuna_Sphere");
    return (UEnvQueryGenerator_Mercuna_Sphere*)res;
}
