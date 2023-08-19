#include "ABP_Hitbox_Dugbog_Lunge_C.hpp"
#include "AMunitionType_Hitbox.hpp"
#include "USceneComponent.hpp"
ABP_Hitbox_Dugbog_Lunge_C* ABP_Hitbox_Dugbog_Lunge_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_Hitbox_Dugbog_Lunge.BP_Hitbox_Dugbog_Lunge_C");
    return (ABP_Hitbox_Dugbog_Lunge_C*)res;
}
