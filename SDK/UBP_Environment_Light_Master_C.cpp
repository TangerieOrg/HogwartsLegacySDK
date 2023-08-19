#include "UBP_Environment_Light_Master_C.hpp"
#include "UIdentityLightTemplateComponent.hpp"
UBP_Environment_Light_Master_C* UBP_Environment_Light_Master_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Lighting/Sanctuary/Blueprints/Identitylighting/BP_Environment_Light_Master.BP_Environment_Light_Master_C");
    return (UBP_Environment_Light_Master_C*)res;
}
