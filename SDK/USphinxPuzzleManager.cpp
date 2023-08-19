#include "FVector.hpp"
#include "UFunction.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
#include "USceneComponent.hpp"
#include "USphinxPuzzleManager.hpp"
FVector USphinxPuzzleManager::FlipendoPuzzle_GetRotationFromHitLocation(USceneComponent* BlockComponent, FVector& HitLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SphinxPuzzleManager.FlipendoPuzzle_GetRotationFromHitLocation"));
    struct Params_FlipendoPuzzle_GetRotationFromHitLocation {
        USceneComponent* BlockComponent; // 0x0
        FVector HitLocation; // 0x8
        FVector ReturnValue; // 0x14
    }; // Size: 0x20
    Params_FlipendoPuzzle_GetRotationFromHitLocation params{};
    params.BlockComponent = (USceneComponent*)BlockComponent;
    params.HitLocation = (FVector)HitLocation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HitLocation = params.HitLocation;
    return (FVector)params.ReturnValue;
}
USphinxPuzzleManager* USphinxPuzzleManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SphinxPuzzleManager");
    return (USphinxPuzzleManager*)res;
}
