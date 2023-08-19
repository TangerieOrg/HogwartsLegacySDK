#include "UBP_F_PhxAnmShr_ThreeIdles_Listen_C.hpp"
#include "UPhxAnimationSharingSetup.hpp"
UBP_F_PhxAnmShr_ThreeIdles_Listen_C* UBP_F_PhxAnmShr_ThreeIdles_Listen_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Tier4/SharedAnimData/T4_F_Anims/BP_F_PhxAnmShr_ThreeIdles_Listen.BP_F_PhxAnmShr_ThreeIdles_Listen_C");
    return (UBP_F_PhxAnmShr_ThreeIdles_Listen_C*)res;
}
