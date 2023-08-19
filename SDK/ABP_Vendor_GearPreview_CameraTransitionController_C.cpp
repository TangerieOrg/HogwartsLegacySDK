#include "ABP_Vendor_GearPreview_CameraTransitionController_C.hpp"
#include "ACameraStackTransitionController.hpp"
ABP_Vendor_GearPreview_CameraTransitionController_C* ABP_Vendor_GearPreview_CameraTransitionController_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Cinematics/Conversations/Vendor/BP_Vendor_GearPreview_CameraTransitionController.BP_Vendor_GearPreview_CameraTransitionController_C");
    return (ABP_Vendor_GearPreview_CameraTransitionController_C*)res;
}
