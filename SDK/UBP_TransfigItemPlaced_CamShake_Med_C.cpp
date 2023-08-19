#include "UBP_TransfigItemPlaced_CamShake_Med_C.hpp"
#include "UMatineeCameraShake.hpp"
UBP_TransfigItemPlaced_CamShake_Med_C* UBP_TransfigItemPlaced_CamShake_Med_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CameraShakes/BP_TransfigItemPlaced_CamShake_Med.BP_TransfigItemPlaced_CamShake_Med_C");
    return (UBP_TransfigItemPlaced_CamShake_Med_C*)res;
}
