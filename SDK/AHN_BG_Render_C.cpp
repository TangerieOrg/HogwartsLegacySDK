#include "AHN_BG_Render_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_BG_Render_C* AHN_BG_Render_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/HN_BG_Render.HN_BG_Render_C");
    return (AHN_BG_Render_C*)res;
}
