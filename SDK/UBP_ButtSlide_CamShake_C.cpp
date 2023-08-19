#include "UBP_ButtSlide_CamShake_C.hpp"
#include "UMatineeCameraShake.hpp"
UBP_ButtSlide_CamShake_C* UBP_ButtSlide_CamShake_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CameraShakes/BP_ButtSlide_CamShake.BP_ButtSlide_CamShake_C");
    return (UBP_ButtSlide_CamShake_C*)res;
}
