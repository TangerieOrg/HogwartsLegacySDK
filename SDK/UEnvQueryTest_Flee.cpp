#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_Flee.hpp"
UEnvQueryTest_Flee* UEnvQueryTest_Flee::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryTest_Flee");
    return (UEnvQueryTest_Flee*)res;
}
