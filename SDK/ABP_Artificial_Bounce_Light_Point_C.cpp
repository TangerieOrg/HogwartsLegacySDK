#include "AActor.hpp"
#include "ABP_Artificial_Bounce_Light_Point_C.hpp"
#include "UBP_Artificial_Light_Master_C.hpp"
#include "UPointLightComponent.hpp"
#include "USceneComponent.hpp"
ABP_Artificial_Bounce_Light_Point_C* ABP_Artificial_Bounce_Light_Point_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Lighting/Sanctuary/Blueprints/Identitylighting/BP_Artificial_Bounce_Light_Point.BP_Artificial_Bounce_Light_Point_C");
    return (ABP_Artificial_Bounce_Light_Point_C*)res;
}
