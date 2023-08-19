#include "ABP_SkinFX_Inferi_CharredState_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_Inferi_CharredState_C* ABP_SkinFX_Inferi_CharredState_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_Inferi_CharredState.BP_SkinFX_Inferi_CharredState_C");
    return (ABP_SkinFX_Inferi_CharredState_C*)res;
}
