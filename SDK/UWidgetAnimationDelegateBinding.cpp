#include "FBlueprintWidgetAnimationDelegateBinding.hpp"
#include "UDynamicBlueprintBinding.hpp"
#include "UWidgetAnimationDelegateBinding.hpp"
UWidgetAnimationDelegateBinding* UWidgetAnimationDelegateBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.WidgetAnimationDelegateBinding");
    return (UWidgetAnimationDelegateBinding*)res;
}
