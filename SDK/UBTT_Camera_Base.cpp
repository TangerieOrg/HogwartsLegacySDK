#include "UBTT_Camera_Base.hpp"
#include "UBTTaskNode.hpp"
UBTT_Camera_Base* UBTT_Camera_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTT_Camera_Base");
    return (UBTT_Camera_Base*)res;
}
