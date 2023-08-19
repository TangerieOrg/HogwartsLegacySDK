#include "FAIDataProviderFloatValue.hpp"
#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_Creature_AreaContainsGroupCoordinatedTag.hpp"
UEnvQueryTest_Creature_AreaContainsGroupCoordinatedTag* UEnvQueryTest_Creature_AreaContainsGroupCoordinatedTag::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryTest_Creature_AreaContainsGroupCoordinatedTag");
    return (UEnvQueryTest_Creature_AreaContainsGroupCoordinatedTag*)res;
}
