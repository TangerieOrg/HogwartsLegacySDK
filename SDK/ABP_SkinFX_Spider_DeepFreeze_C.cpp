#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_Spider_DeepFreeze_C.hpp"
ABP_SkinFX_Spider_DeepFreeze_C* ABP_SkinFX_Spider_DeepFreeze_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_Spider_DeepFreeze.BP_SkinFX_Spider_DeepFreeze_C");
    return (ABP_SkinFX_Spider_DeepFreeze_C*)res;
}
