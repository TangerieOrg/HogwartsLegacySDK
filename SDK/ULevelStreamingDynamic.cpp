#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "ULevelStreaming.hpp"
#include "ULevelStreamingDynamic.hpp"
#include "UObject.hpp"
ULevelStreamingDynamic* ULevelStreamingDynamic::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LevelStreamingDynamic");
    return (ULevelStreamingDynamic*)res;
}
void ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(UObject* WorldContextObject) {}
ULevelStreamingDynamic* ULevelStreamingDynamic::LoadLevelInstance(UObject* WorldContextObject, FString LevelName, FVector Location, FRotator Rotation, bool& bOutSuccess, FString OptionalLevelNameOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LevelStreamingDynamic.LoadLevelInstance"));
    struct Params_LoadLevelInstance {
        UObject* WorldContextObject; // 0x0
        FString LevelName; // 0x8
        FVector Location; // 0x18
        FRotator Rotation; // 0x24
        bool bOutSuccess; // 0x30
        char pad_31[0x7];
        FString OptionalLevelNameOverride; // 0x38
        ULevelStreamingDynamic* ReturnValue; // 0x48
    }; // Size: 0x50
    Params_LoadLevelInstance params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LevelName = (FString)LevelName;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.bOutSuccess = (bool)bOutSuccess;
    params.OptionalLevelNameOverride = (FString)OptionalLevelNameOverride;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bOutSuccess = params.bOutSuccess;
    return (ULevelStreamingDynamic*)params.ReturnValue;
}
