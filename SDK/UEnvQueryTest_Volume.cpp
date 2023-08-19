#include "UClass.hpp"
#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_Volume.hpp"
UEnvQueryTest_Volume* UEnvQueryTest_Volume::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryTest_Volume");
    return (UEnvQueryTest_Volume*)res;
}
