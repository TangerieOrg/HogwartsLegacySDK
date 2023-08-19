#include "UBTT_Camera_Base.hpp"
#include "UBTT_Camera_BlendToStackBase.hpp"
#include "UCameraStackSettings.hpp"
UBTT_Camera_BlendToStackBase* UBTT_Camera_BlendToStackBase::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTT_Camera_BlendToStackBase");
    return (UBTT_Camera_BlendToStackBase*)res;
}
