#include "UEnvQueryTest_Mercuna_NavigableVolume.hpp"
#include "UMercunaQueryTest.hpp"
UEnvQueryTest_Mercuna_NavigableVolume* UEnvQueryTest_Mercuna_NavigableVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.EnvQueryTest_Mercuna_NavigableVolume");
    return (UEnvQueryTest_Mercuna_NavigableVolume*)res;
}
