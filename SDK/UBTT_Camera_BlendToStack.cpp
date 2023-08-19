#include "UBTT_Camera_BlendToStack.hpp"
#include "UBTT_Camera_BlendToStackBase.hpp"
UBTT_Camera_BlendToStack* UBTT_Camera_BlendToStack::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTT_Camera_BlendToStack");
    return (UBTT_Camera_BlendToStack*)res;
}
