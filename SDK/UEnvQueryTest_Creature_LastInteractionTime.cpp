#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_Creature_LastInteractionTime.hpp"
UEnvQueryTest_Creature_LastInteractionTime* UEnvQueryTest_Creature_LastInteractionTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryTest_Creature_LastInteractionTime");
    return (UEnvQueryTest_Creature_LastInteractionTime*)res;
}
