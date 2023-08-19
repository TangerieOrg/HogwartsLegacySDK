#include "FEnvTraceData.hpp"
#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_Project.hpp"
UEnvQueryTest_Project* UEnvQueryTest_Project::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryTest_Project");
    return (UEnvQueryTest_Project*)res;
}
