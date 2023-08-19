#include "UBTT_Camera_Base.hpp"
#include "UBTT_Camera_Reset.hpp"
#include "UCurveFloat.hpp"
UBTT_Camera_Reset* UBTT_Camera_Reset::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTT_Camera_Reset");
    return (UBTT_Camera_Reset*)res;
}
