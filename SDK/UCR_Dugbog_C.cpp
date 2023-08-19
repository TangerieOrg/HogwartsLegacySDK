#include "FTransform.hpp"
#include "FVector.hpp"
#include "UCR_Dugbog_C.hpp"
#include "UControlRig.hpp"
UCR_Dugbog_C* UCR_Dugbog_C::StaticClass() {
    static auto res = find_uobject("ControlRigBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Dugbog/CR_Dugbog.CR_Dugbog_C");
    return (UCR_Dugbog_C*)res;
}
