#include "ABP_SkinFX_CreatureCapture_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "FLinearColor.hpp"
ABP_SkinFX_CreatureCapture_C* ABP_SkinFX_CreatureCapture_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_CreatureCapture.BP_SkinFX_CreatureCapture_C");
    return (ABP_SkinFX_CreatureCapture_C*)res;
}
