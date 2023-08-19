#include "ABP_Sanc_AmbientPainting_Frame_C.hpp"
#include "AVFX_BP_AmbientPainting_Frame_C.hpp"
#include "UObjectStateComponent.hpp"
ABP_Sanc_AmbientPainting_Frame_C* ABP_Sanc_AmbientPainting_Frame_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_AmbientPainting_Frame.BP_Sanc_AmbientPainting_Frame_C");
    return (ABP_Sanc_AmbientPainting_Frame_C*)res;
}
