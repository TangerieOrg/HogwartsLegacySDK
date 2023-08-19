#include "AActor.hpp"
#include "ABP_Frontend_Deco_DADA_C.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Frontend_Deco_DADA_C* ABP_Frontend_Deco_DADA_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/UI/Frontend/BP_Frontend_Deco_DADA.BP_Frontend_Deco_DADA_C");
    return (ABP_Frontend_Deco_DADA_C*)res;
}
