#include "AActor.hpp"
#include "ABP_Frontend_Deco_Charms_C.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Frontend_Deco_Charms_C* ABP_Frontend_Deco_Charms_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/UI/Frontend/BP_Frontend_Deco_Charms.BP_Frontend_Deco_Charms_C");
    return (ABP_Frontend_Deco_Charms_C*)res;
}
