#include "AHN_BroomRace_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_BroomRace_C* AHN_BroomRace_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/HN_BroomRace.HN_BroomRace_C");
    return (AHN_BroomRace_C*)res;
}
