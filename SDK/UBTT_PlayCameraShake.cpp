#include "UBTT_PlayCameraShake.hpp"
#include "UBTTaskNode.hpp"
#include "UClass.hpp"
UBTT_PlayCameraShake* UBTT_PlayCameraShake::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTT_PlayCameraShake");
    return (UBTT_PlayCameraShake*)res;
}
