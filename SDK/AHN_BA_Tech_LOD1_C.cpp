#include "AHN_BA_Tech_LOD1_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_BA_Tech_LOD1_C* AHN_BA_Tech_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/HN_BA_TechLOD/HN_BA_Tech_LOD1.HN_BA_Tech_LOD1_C");
    return (AHN_BA_Tech_LOD1_C*)res;
}
