#include "AActor.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
bool UPhxDbRegistryTypeManager::UnregisterSpawnWhenDestroyed(AActor* InAssetPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhxDbRegistryTypeManager.UnregisterSpawnWhenDestroyed"));
    struct Params_UnregisterSpawnWhenDestroyed {
        AActor* InAssetPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_UnregisterSpawnWhenDestroyed params{};
    params.InAssetPtr = (AActor*)InAssetPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UPhxDbRegistryTypeManager* UPhxDbRegistryTypeManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhxDbRegistryTypeManager");
    return (UPhxDbRegistryTypeManager*)res;
}
bool UPhxDbRegistryTypeManager::RegisterNewSpawn(AActor* InAssetPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhxDbRegistryTypeManager.RegisterNewSpawn"));
    struct Params_RegisterNewSpawn {
        AActor* InAssetPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RegisterNewSpawn params{};
    params.InAssetPtr = (AActor*)InAssetPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
