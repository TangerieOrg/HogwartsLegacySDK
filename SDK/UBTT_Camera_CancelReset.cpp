#include "UBTT_Camera_Base.hpp"
#include "UBTT_Camera_CancelReset.hpp"
UBTT_Camera_CancelReset* UBTT_Camera_CancelReset::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTT_Camera_CancelReset");
    return (UBTT_Camera_CancelReset*)res;
}
