#include "FChaosPhysicsCollisionInfo.hpp"
#include "FHitResult.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UChaosSolverEngineBlueprintLibrary.hpp"
#include "UFunction.hpp"
UChaosSolverEngineBlueprintLibrary* UChaosSolverEngineBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary");
    return (UChaosSolverEngineBlueprintLibrary*)res;
}
FHitResult UChaosSolverEngineBlueprintLibrary::ConvertPhysicsCollisionToHitResult(FChaosPhysicsCollisionInfo& PhysicsCollision) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult"));
    struct Params_ConvertPhysicsCollisionToHitResult {
        FChaosPhysicsCollisionInfo PhysicsCollision; // 0x0
        FHitResult ReturnValue; // 0x70
    }; // Size: 0xf8
    Params_ConvertPhysicsCollisionToHitResult params{};
    params.PhysicsCollision = (FChaosPhysicsCollisionInfo)PhysicsCollision;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PhysicsCollision = params.PhysicsCollision;
    return (FHitResult)params.ReturnValue;
}
