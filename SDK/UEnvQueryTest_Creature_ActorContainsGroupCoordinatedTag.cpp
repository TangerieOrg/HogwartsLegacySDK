#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_Creature_ActorContainsGroupCoordinatedTag.hpp"
UEnvQueryTest_Creature_ActorContainsGroupCoordinatedTag* UEnvQueryTest_Creature_ActorContainsGroupCoordinatedTag::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryTest_Creature_ActorContainsGroupCoordinatedTag");
    return (UEnvQueryTest_Creature_ActorContainsGroupCoordinatedTag*)res;
}
