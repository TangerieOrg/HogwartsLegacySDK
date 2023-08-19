#include "ACombat_Challenge_Cave_STREAM_C.hpp"
#include "ALevelScriptActor.hpp"
ACombat_Challenge_Cave_STREAM_C* ACombat_Challenge_Cave_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Challenges/Combat_Challenges/Combat_Challenge_Cave_STREAM_LevelInstance_12.Combat_Challenge_Cave_STREAM_C");
    return (ACombat_Challenge_Cave_STREAM_C*)res;
}
