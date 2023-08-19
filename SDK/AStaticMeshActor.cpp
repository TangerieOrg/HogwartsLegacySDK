#include "AActor.hpp"
#include "AStaticMeshActor.hpp"
#include "EComponentMobility\Type.hpp"
#include "ENavDataGatheringMode.hpp"
#include "UFunction.hpp"
#include "UStaticMeshComponent.hpp"
AStaticMeshActor* AStaticMeshActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.StaticMeshActor");
    return (AStaticMeshActor*)res;
}
void AStaticMeshActor::SetMobility(EComponentMobility::Type InMobility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StaticMeshActor.SetMobility"));
    struct Params_SetMobility {
        EComponentMobility::Type InMobility; // 0x0
    }; // Size: 0x1
    Params_SetMobility params{};
    params.InMobility = (EComponentMobility::Type)InMobility;
    ProcessEvent(func, &params);
}
