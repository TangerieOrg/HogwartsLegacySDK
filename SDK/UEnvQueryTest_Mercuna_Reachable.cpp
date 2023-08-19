#include "FAIDataProviderFloatValue.hpp"
#include "UClass.hpp"
#include "UEnvQueryTest_Mercuna_Reachable.hpp"
#include "UMercunaQueryTest.hpp"
UEnvQueryTest_Mercuna_Reachable* UEnvQueryTest_Mercuna_Reachable::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.EnvQueryTest_Mercuna_Reachable");
    return (UEnvQueryTest_Mercuna_Reachable*)res;
}
