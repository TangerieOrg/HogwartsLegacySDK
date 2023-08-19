#include "AActor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPerkFX.hpp"
UPerkFX* UPerkFX::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PerkFX");
    return (UPerkFX*)res;
}
void UPerkFX::DoPerkFX(FString PerkName, AActor* InActor, FVector InLocation, FRotator InRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerkFX.DoPerkFX"));
    struct Params_DoPerkFX {
        FString PerkName; // 0x0
        AActor* InActor; // 0x10
        FVector InLocation; // 0x18
        FRotator InRotation; // 0x24
    }; // Size: 0x30
    Params_DoPerkFX params{};
    params.PerkName = (FString)PerkName;
    params.InActor = (AActor*)InActor;
    params.InLocation = (FVector)InLocation;
    params.InRotation = (FRotator)InRotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
