#include "UBTT_Camera_Base.hpp"
#include "UBTT_Camera_SetPrimaryTargetActor.hpp"
#include "UClass.hpp"
UBTT_Camera_SetPrimaryTargetActor* UBTT_Camera_SetPrimaryTargetActor::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTT_Camera_SetPrimaryTargetActor");
    return (UBTT_Camera_SetPrimaryTargetActor*)res;
}
