#include "FWorldFXSpawnOverrides.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UWorldFXInterface.hpp"
UWorldFXInterface* UWorldFXInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXInterface");
    return (UWorldFXInterface*)res;
}
void UWorldFXInterface::WorldFXInterfaceStart(FWorldFXSpawnOverrides SpawnOverrides) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXInterface.WorldFXInterfaceStart"));
    struct Params_WorldFXInterfaceStart {
        FWorldFXSpawnOverrides SpawnOverrides; // 0x0
    }; // Size: 0x70
    Params_WorldFXInterfaceStart params{};
    params.SpawnOverrides = (FWorldFXSpawnOverrides)SpawnOverrides;
    ProcessEvent(func, &params);
}
void UWorldFXInterface::WorldFXInterfaceStop(bool bImmediately) {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXInterface.WorldFXInterfaceStop"));
    struct Params_WorldFXInterfaceStop {
        bool bImmediately; // 0x0
    }; // Size: 0x1
    Params_WorldFXInterfaceStop params{};
    params.bImmediately = (bool)bImmediately;
    ProcessEvent(func, &params);
}
