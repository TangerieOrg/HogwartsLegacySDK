#include "AActor.hpp"
#include "ABP_PawnCollisionActor_Box_C.hpp"
#include "FVector.hpp"
#include "UBillboardComponent.hpp"
#include "UBoxComponent.hpp"
#include "UFunction.hpp"
ABP_PawnCollisionActor_Box_C* ABP_PawnCollisionActor_Box_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Blueprints/BP_PawnCollisionActor_Box.BP_PawnCollisionActor_Box_C");
    return (ABP_PawnCollisionActor_Box_C*)res;
}
void ABP_PawnCollisionActor_Box_C::UserConstructionScript0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/BP_PawnCollisionActor_Box.BP_PawnCollisionActor_Box_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
