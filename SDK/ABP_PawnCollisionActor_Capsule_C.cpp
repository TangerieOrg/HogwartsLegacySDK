#include "AActor.hpp"
#include "ABP_PawnCollisionActor_Capsule_C.hpp"
#include "UBillboardComponent.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
ABP_PawnCollisionActor_Capsule_C* ABP_PawnCollisionActor_Capsule_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Blueprints/BP_PawnCollisionActor_Capsule.BP_PawnCollisionActor_Capsule_C");
    return (ABP_PawnCollisionActor_Capsule_C*)res;
}
void ABP_PawnCollisionActor_Capsule_C::UserConstructionScript0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/BP_PawnCollisionActor_Capsule.BP_PawnCollisionActor_Capsule_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
