#include "EEnvTestDot.hpp"
#include "FEnvDirection.hpp"
#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_Dot.hpp"
UEnvQueryTest_Dot* UEnvQueryTest_Dot::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryTest_Dot");
    return (UEnvQueryTest_Dot*)res;
}
