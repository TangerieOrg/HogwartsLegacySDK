#include "AActor.hpp"
#include "ABP_Frontend_ButterbeerMug_C.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Frontend_ButterbeerMug_C* ABP_Frontend_ButterbeerMug_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/UI/Frontend/BP_Frontend_ButterbeerMug.BP_Frontend_ButterbeerMug_C");
    return (ABP_Frontend_ButterbeerMug_C*)res;
}
