#include "UImage.hpp"
#include "UUI_BP_AimLock_Reticule_OffScreen_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_AimLock_Reticule_OffScreen_C* UUI_BP_AimLock_Reticule_OffScreen_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Reticles/UI_BP_AimLock_Reticule_OffScreen.UI_BP_AimLock_Reticule_OffScreen_C");
    return (UUI_BP_AimLock_Reticule_OffScreen_C*)res;
}
