#include "AHN_BI_Render_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_BI_Render_C* AHN_BI_Render_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/HN_BI_Render.HN_BI_Render_C");
    return (AHN_BI_Render_C*)res;
}
