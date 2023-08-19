#include "ABP_SubSonic_Expelliarmus_C.hpp"
#include "AMunitionType_SubsonicSpell.hpp"
#include "UNiagaraComponent.hpp"
#include "USkeletalMeshComponent.hpp"
ABP_SubSonic_Expelliarmus_C* ABP_SubSonic_Expelliarmus_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_SubSonic_Expelliarmus.BP_SubSonic_Expelliarmus_C");
    return (ABP_SubSonic_Expelliarmus_C*)res;
}
