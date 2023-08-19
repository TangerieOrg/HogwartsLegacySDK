#include "UBP_LedgeLand_CamShake_New_C.hpp"
#include "UCameraShakeBase.hpp"
UBP_LedgeLand_CamShake_New_C* UBP_LedgeLand_CamShake_New_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CameraShakes/BP_LedgeLand_CamShake_New.BP_LedgeLand_CamShake_New_C");
    return (UBP_LedgeLand_CamShake_New_C*)res;
}
