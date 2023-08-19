#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_PatrolSetup.hpp"
UEnvQueryTest_PatrolSetup* UEnvQueryTest_PatrolSetup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryTest_PatrolSetup");
    return (UEnvQueryTest_PatrolSetup*)res;
}
