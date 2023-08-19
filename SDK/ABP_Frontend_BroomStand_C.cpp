#include "AActor.hpp"
#include "ABP_Frontend_BroomStand_C.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Frontend_BroomStand_C* ABP_Frontend_BroomStand_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/UI/Frontend/BP_Frontend_BroomStand.BP_Frontend_BroomStand_C");
    return (ABP_Frontend_BroomStand_C*)res;
}
