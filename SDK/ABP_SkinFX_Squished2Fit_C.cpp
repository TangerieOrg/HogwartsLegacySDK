#include "ABP_SkinFX_Graph_Parent_C.hpp"
#include "ABP_SkinFX_Squished2Fit_C.hpp"
#include "USkinFXPreviewComponent.hpp"
ABP_SkinFX_Squished2Fit_C* ABP_SkinFX_Squished2Fit_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_Squished2Fit.BP_SkinFX_Squished2Fit_C");
    return (ABP_SkinFX_Squished2Fit_C*)res;
}
