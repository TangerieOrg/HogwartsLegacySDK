#include "AActor.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UCompanionBlueprintLibrary.hpp"
#include "UFunction.hpp"
UCompanionBlueprintLibrary* UCompanionBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CompanionBlueprintLibrary");
    return (UCompanionBlueprintLibrary*)res;
}
bool UCompanionBlueprintLibrary::IsCompanionPawn(AActor* TargetActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionBlueprintLibrary.IsCompanionPawn"));
    struct Params_IsCompanionPawn {
        AActor* TargetActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsCompanionPawn params{};
    params.TargetActor = (AActor*)TargetActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCompanionBlueprintLibrary::HasCompanionOverlaps(AActor* TargetActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionBlueprintLibrary.HasCompanionOverlaps"));
    struct Params_HasCompanionOverlaps {
        AActor* TargetActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasCompanionOverlaps params{};
    params.TargetActor = (AActor*)TargetActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
