#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_Patrol.hpp"
UEnvQueryTest_Patrol* UEnvQueryTest_Patrol::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryTest_Patrol");
    return (UEnvQueryTest_Patrol*)res;
}
