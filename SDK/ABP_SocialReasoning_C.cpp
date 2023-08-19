#include "ABP_SocialReasoning_C.hpp"
#include "ASocialReasoning.hpp"
#include "USceneComponent.hpp"
#include "UStationArchitectComponent.hpp"
ABP_SocialReasoning_C* ABP_SocialReasoning_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/SocialReasoning/BP_SocialReasoning.BP_SocialReasoning_C");
    return (ABP_SocialReasoning_C*)res;
}
