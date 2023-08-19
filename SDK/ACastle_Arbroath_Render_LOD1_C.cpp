#include "ACastle_Arbroath_Render_LOD1_C.hpp"
#include "ALevelScriptActor.hpp"
ACastle_Arbroath_Render_LOD1_C* ACastle_Arbroath_Render_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/Features/Castle_Arbroath/Castle_Arbroath_RenderLOD/Castle_Arbroath_Render_LOD1.Castle_Arbroath_Render_LOD1_C");
    return (ACastle_Arbroath_Render_LOD1_C*)res;
}
