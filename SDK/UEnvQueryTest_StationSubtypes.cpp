#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_StationSubtypes.hpp"
UEnvQueryTest_StationSubtypes* UEnvQueryTest_StationSubtypes::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryTest_StationSubtypes");
    return (UEnvQueryTest_StationSubtypes*)res;
}
