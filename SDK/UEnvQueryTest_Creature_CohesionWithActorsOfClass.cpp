#include "FAIDataProviderFloatValue.hpp"
#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_Creature_CohesionWithActorsOfClass.hpp"
UEnvQueryTest_Creature_CohesionWithActorsOfClass* UEnvQueryTest_Creature_CohesionWithActorsOfClass::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryTest_Creature_CohesionWithActorsOfClass");
    return (UEnvQueryTest_Creature_CohesionWithActorsOfClass*)res;
}
