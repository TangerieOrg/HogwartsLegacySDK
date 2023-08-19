#include "AHN_BI_Tech_LOD1_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_BI_Tech_LOD1_C* AHN_BI_Tech_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/HN_BI_TechLOD/HN_BI_Tech_LOD1.HN_BI_Tech_LOD1_C");
    return (AHN_BI_Tech_LOD1_C*)res;
}
