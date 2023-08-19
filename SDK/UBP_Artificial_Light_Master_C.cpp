#include "UBP_Artificial_Light_Master_C.hpp"
#include "UIdentityLightTemplateComponent.hpp"
UBP_Artificial_Light_Master_C* UBP_Artificial_Light_Master_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Lighting/Sanctuary/Blueprints/Identitylighting/BP_Artificial_Light_Master.BP_Artificial_Light_Master_C");
    return (UBP_Artificial_Light_Master_C*)res;
}
