#include "AActor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "URootControlFunctions.hpp"
void URootControlFunctions::AdjustWorldSpaceTransform(AActor* Actor, FVector& TranslationOffset, FRotator& RotationOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.RootControlFunctions.AdjustWorldSpaceTransform"));
    struct Params_AdjustWorldSpaceTransform {
        AActor* Actor; // 0x0
        FVector TranslationOffset; // 0x8
        FRotator RotationOffset; // 0x14
    }; // Size: 0x20
    Params_AdjustWorldSpaceTransform params{};
    params.Actor = (AActor*)Actor;
    params.TranslationOffset = (FVector)TranslationOffset;
    params.RotationOffset = (FRotator)RotationOffset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TranslationOffset = params.TranslationOffset;
    RotationOffset = params.RotationOffset;
}
URootControlFunctions* URootControlFunctions::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.RootControlFunctions");
    return (URootControlFunctions*)res;
}
