#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_Random.hpp"
UEnvQueryTest_Random* UEnvQueryTest_Random::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryTest_Random");
    return (UEnvQueryTest_Random*)res;
}
