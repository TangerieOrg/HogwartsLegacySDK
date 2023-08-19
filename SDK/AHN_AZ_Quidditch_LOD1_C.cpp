#include "AHN_AZ_Quidditch_LOD1_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_AZ_Quidditch_LOD1_C* AHN_AZ_Quidditch_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/HN_AZ_QuidditchLOD/HN_AZ_Quidditch_LOD1.HN_AZ_Quidditch_LOD1_C");
    return (AHN_AZ_Quidditch_LOD1_C*)res;
}
