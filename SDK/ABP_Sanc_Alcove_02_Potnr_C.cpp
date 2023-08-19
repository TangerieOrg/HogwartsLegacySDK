#include "ABP_Sanc_Alcove_02_Parent_C.hpp"
#include "ABP_Sanc_Alcove_02_Potnr_C.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Sanc_Alcove_02_Potnr_C* ABP_Sanc_Alcove_02_Potnr_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Sanctuary/Blueprints/Structures/BP_Sanc_Alcove_02_Potnr.BP_Sanc_Alcove_02_Potnr_C");
    return (ABP_Sanc_Alcove_02_Potnr_C*)res;
}
