#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_Stations.hpp"
UEnvQueryTest_Stations* UEnvQueryTest_Stations::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryTest_Stations");
    return (UEnvQueryTest_Stations*)res;
}
