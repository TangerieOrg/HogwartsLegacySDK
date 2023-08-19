#include "FEnvOverlapData.hpp"
#include "UClass.hpp"
#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_OverlapWithIgnore.hpp"
UEnvQueryTest_OverlapWithIgnore* UEnvQueryTest_OverlapWithIgnore::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryTest_OverlapWithIgnore");
    return (UEnvQueryTest_OverlapWithIgnore*)res;
}
