#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_Creature_InFrontOfContextActor.hpp"
UEnvQueryTest_Creature_InFrontOfContextActor* UEnvQueryTest_Creature_InFrontOfContextActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryTest_Creature_InFrontOfContextActor");
    return (UEnvQueryTest_Creature_InFrontOfContextActor*)res;
}
