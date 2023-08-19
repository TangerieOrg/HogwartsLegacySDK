#include "UABP_Robe_ClothJoints_Base_C.hpp"
#include "UABP_Robe_ClothJoints_C.hpp"
UABP_Robe_ClothJoints_C* UABP_Robe_ClothJoints_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/RiggedObjects/Characters/Human/Clothing/ABP_Robe_ClothJoints.ABP_Robe_ClothJoints_C");
    return (UABP_Robe_ClothJoints_C*)res;
}
