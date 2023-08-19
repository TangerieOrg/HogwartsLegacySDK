#include "UClass.hpp"
#include "UEnvQueryTest_Mercuna_NavRaycast.hpp"
#include "UMercunaQueryTest.hpp"
UEnvQueryTest_Mercuna_NavRaycast* UEnvQueryTest_Mercuna_NavRaycast::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.EnvQueryTest_Mercuna_NavRaycast");
    return (UEnvQueryTest_Mercuna_NavRaycast*)res;
}
