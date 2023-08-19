#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_StationHouseGender.hpp"
UEnvQueryTest_StationHouseGender* UEnvQueryTest_StationHouseGender::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryTest_StationHouseGender");
    return (UEnvQueryTest_StationHouseGender*)res;
}
