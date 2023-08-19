#include "UBTT_Camera_AddBehavior.hpp"
#include "UBTT_Camera_Base.hpp"
#include "UClass.hpp"
UBTT_Camera_AddBehavior* UBTT_Camera_AddBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTT_Camera_AddBehavior");
    return (UBTT_Camera_AddBehavior*)res;
}
