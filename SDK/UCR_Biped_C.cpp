#include "FTransform.hpp"
#include "FVector.hpp"
#include "UCR_Biped_C.hpp"
#include "UControlRig.hpp"
UCR_Biped_C* UCR_Biped_C::StaticClass() {
    static auto res = find_uobject("ControlRigBlueprintGeneratedClass /Game/Animation/Biped/CR_Biped.CR_Biped_C");
    return (UCR_Biped_C*)res;
}
