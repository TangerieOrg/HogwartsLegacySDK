#include "FAIDataProviderFloatValue.hpp"
#include "UEnvQueryTest_Mercuna_Project.hpp"
#include "UMercunaQueryTest.hpp"
UEnvQueryTest_Mercuna_Project* UEnvQueryTest_Mercuna_Project::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.EnvQueryTest_Mercuna_Project");
    return (UEnvQueryTest_Mercuna_Project*)res;
}
