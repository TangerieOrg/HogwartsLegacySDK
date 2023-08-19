#include "AActor.hpp"
#include "ABP_Frontend_ProtectorSword_C.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
ABP_Frontend_ProtectorSword_C* ABP_Frontend_ProtectorSword_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/UI/Frontend/BP_Frontend_ProtectorSword.BP_Frontend_ProtectorSword_C");
    return (ABP_Frontend_ProtectorSword_C*)res;
}
