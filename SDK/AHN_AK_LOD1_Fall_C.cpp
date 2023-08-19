#include "AHN_AK_LOD1_Fall_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_AK_LOD1_Fall_C* AHN_AK_LOD1_Fall_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/HOG/HN_AKLOD/HN_AK_LOD1_Fall.HN_AK_LOD1_Fall_C");
    return (AHN_AK_LOD1_Fall_C*)res;
}
