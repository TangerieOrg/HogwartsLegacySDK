#include "AActor.hpp"
#include "EPerformTasksSpell.hpp"
#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskCastSpell.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "USpellToolRecord.hpp"
void UAIPerformTaskCastSpell::WeaponsAreReady(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AIPerformTaskCastSpell.WeaponsAreReady"));
    struct Params_WeaponsAreReady {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_WeaponsAreReady params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
UAIPerformTaskCastSpell* UAIPerformTaskCastSpell::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskCastSpell");
    return (UAIPerformTaskCastSpell*)res;
}
void UAIPerformTaskCastSpell::OnTargetActorSpawnInFinished(AActor* SpawnedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AIPerformTaskCastSpell.OnTargetActorSpawnInFinished"));
    struct Params_OnTargetActorSpawnInFinished {
        AActor* SpawnedActor; // 0x0
    }; // Size: 0x8
    Params_OnTargetActorSpawnInFinished params{};
    params.SpawnedActor = (AActor*)SpawnedActor;
    ProcessEvent(func, &params);
}
