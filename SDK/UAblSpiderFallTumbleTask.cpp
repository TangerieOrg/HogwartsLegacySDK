#include "AActor.hpp"
#include "FAlphaBlend.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblSpiderFallTumbleTask.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UParticleSystem.hpp"
UAblSpiderFallTumbleTask* UAblSpiderFallTumbleTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSpiderFallTumbleTask");
    return (UAblSpiderFallTumbleTask*)res;
}
void UAblSpiderFallTumbleTask::HandleBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AblSpiderFallTumbleTask.HandleBeginOverlap"));
    struct Params_HandleBeginOverlap {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_HandleBeginOverlap params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
