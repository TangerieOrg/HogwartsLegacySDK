#include "UBP_ID_DownwardsDirectional_Master1_C.hpp"
#include "UIdentityLightTemplateComponent.hpp"
UBP_ID_DownwardsDirectional_Master1_C* UBP_ID_DownwardsDirectional_Master1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Lighting/Sanctuary/Blueprints/Prop_Identity_Lighting/BP_ID_DownwardsDirectional_Master1.BP_ID_DownwardsDirectional_Master1_C");
    return (UBP_ID_DownwardsDirectional_Master1_C*)res;
}
