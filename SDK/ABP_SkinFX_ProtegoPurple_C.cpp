#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_ProtegoPurple_C.hpp"
ABP_SkinFX_ProtegoPurple_C* ABP_SkinFX_ProtegoPurple_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_ProtegoPurple.BP_SkinFX_ProtegoPurple_C");
    return (ABP_SkinFX_ProtegoPurple_C*)res;
}
