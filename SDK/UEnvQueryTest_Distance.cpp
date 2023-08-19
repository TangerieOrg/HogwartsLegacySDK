#include "EEnvTestDistance\Type.hpp"
#include "UClass.hpp"
#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_Distance.hpp"
UEnvQueryTest_Distance* UEnvQueryTest_Distance::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryTest_Distance");
    return (UEnvQueryTest_Distance*)res;
}
