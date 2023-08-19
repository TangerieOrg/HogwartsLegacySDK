#include "ABP_SkinFX_Hate_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_Hate_C* ABP_SkinFX_Hate_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_Hate.BP_SkinFX_Hate_C");
    return (ABP_SkinFX_Hate_C*)res;
}
