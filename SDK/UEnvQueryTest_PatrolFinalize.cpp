#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_PatrolFinalize.hpp"
UEnvQueryTest_PatrolFinalize* UEnvQueryTest_PatrolFinalize::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryTest_PatrolFinalize");
    return (UEnvQueryTest_PatrolFinalize*)res;
}
