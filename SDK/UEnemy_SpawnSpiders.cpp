#include "AActor.hpp"
#include "FGameplayTag.hpp"
#include "FVector.hpp"
#include "UEnemy_SpawnSpiders.hpp"
#include "UFunction.hpp"
#include "UNiagaraSystem.hpp"
#include "UObject.hpp"
#include "UParticleSystem.hpp"
UEnemy_SpawnSpiders* UEnemy_SpawnSpiders::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_SpawnSpiders");
    return (UEnemy_SpawnSpiders*)res;
}
bool UEnemy_SpawnSpiders::Update(float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_SpawnSpiders.Update"));
    struct Params_Update {
        float InDeltaTime; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_Update params{};
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemy_SpawnSpiders::Spawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_SpawnSpiders.Spawn"));
    struct Params_Spawn {
    }; // Size: 0x0
    Params_Spawn params{};
    ProcessEvent(func, &params);
}
void UEnemy_SpawnSpiders::DELETE() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_SpawnSpiders.DELETE"));
    struct Params_DELETE {
    }; // Size: 0x0
    Params_DELETE params{};
    ProcessEvent(func, &params);
}
