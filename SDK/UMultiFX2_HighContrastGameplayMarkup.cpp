#include "EHighContrastGameplayMarkup.hpp"
#include "FStencilValueRenderCustomDepthFilter.hpp"
#include "UMultiFX2_CustomDepthLockBase.hpp"
#include "UMultiFX2_HighContrastGameplayMarkup.hpp"
UMultiFX2_HighContrastGameplayMarkup* UMultiFX2_HighContrastGameplayMarkup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_HighContrastGameplayMarkup");
    return (UMultiFX2_HighContrastGameplayMarkup*)res;
}
