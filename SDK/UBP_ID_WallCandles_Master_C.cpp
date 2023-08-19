#include "UBP_ID_WallCandles_Master_C.hpp"
#include "UIdentityLightTemplateComponent.hpp"
UBP_ID_WallCandles_Master_C* UBP_ID_WallCandles_Master_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Lighting/Sanctuary/Blueprints/Prop_Identity_Lighting/BP_ID_WallCandles_Master.BP_ID_WallCandles_Master_C");
    return (UBP_ID_WallCandles_Master_C*)res;
}
