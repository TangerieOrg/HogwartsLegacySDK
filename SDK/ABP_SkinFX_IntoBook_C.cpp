#include "ABP_SkinFX_IntoBook_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_IntoBook_C* ABP_SkinFX_IntoBook_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_IntoBook.BP_SkinFX_IntoBook_C");
    return (ABP_SkinFX_IntoBook_C*)res;
}
