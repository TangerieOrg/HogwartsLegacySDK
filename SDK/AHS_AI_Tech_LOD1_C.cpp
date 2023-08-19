#include "AHS_AI_Tech_LOD1_C.hpp"
#include "ALevelScriptActor.hpp"
AHS_AI_Tech_LOD1_C* AHS_AI_Tech_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/HS_AI_TechLOD/HS_AI_Tech_LOD1.HS_AI_Tech_LOD1_C");
    return (AHS_AI_Tech_LOD1_C*)res;
}
