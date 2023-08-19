#include "FStencilValueRenderCustomDepthFilter.hpp"
#include "UMultiFX2_CustomDepthLockBase.hpp"
#include "UMultiFX2_HighContrastGameplayNPCMarkup.hpp"
UMultiFX2_HighContrastGameplayNPCMarkup* UMultiFX2_HighContrastGameplayNPCMarkup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_HighContrastGameplayNPCMarkup");
    return (UMultiFX2_HighContrastGameplayNPCMarkup*)res;
}
