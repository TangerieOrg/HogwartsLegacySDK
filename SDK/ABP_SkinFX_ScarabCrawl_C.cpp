#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_ScarabCrawl_C.hpp"
ABP_SkinFX_ScarabCrawl_C* ABP_SkinFX_ScarabCrawl_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_ScarabCrawl.BP_SkinFX_ScarabCrawl_C");
    return (ABP_SkinFX_ScarabCrawl_C*)res;
}
