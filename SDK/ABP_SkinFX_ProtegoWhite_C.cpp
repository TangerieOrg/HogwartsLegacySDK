#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_ProtegoWhite_C.hpp"
ABP_SkinFX_ProtegoWhite_C* ABP_SkinFX_ProtegoWhite_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_ProtegoWhite.BP_SkinFX_ProtegoWhite_C");
    return (ABP_SkinFX_ProtegoWhite_C*)res;
}
