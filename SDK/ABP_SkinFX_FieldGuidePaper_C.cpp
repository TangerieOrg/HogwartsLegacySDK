#include "ABP_SkinFX_FieldGuidePaper_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_FieldGuidePaper_C* ABP_SkinFX_FieldGuidePaper_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_FieldGuidePaper.BP_SkinFX_FieldGuidePaper_C");
    return (ABP_SkinFX_FieldGuidePaper_C*)res;
}
