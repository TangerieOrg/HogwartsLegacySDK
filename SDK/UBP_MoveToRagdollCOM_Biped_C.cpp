#include "UBP_MoveToRagdollCOM_Biped_C.hpp"
#include "UCameraStackBehaviorMoveTargetToRagdollCOM.hpp"
UBP_MoveToRagdollCOM_Biped_C* UBP_MoveToRagdollCOM_Biped_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_MoveToRagdollCOM_Biped.BP_MoveToRagdollCOM_Biped_C");
    return (UBP_MoveToRagdollCOM_Biped_C*)res;
}
