#include "AActor.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UTransformationInterface.hpp"
UTransformationInterface* UTransformationInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransformationInterface");
    return (UTransformationInterface*)res;
}
void UTransformationInterface::OnTransformStart(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationInterface.OnTransformStart"));
    struct Params_OnTransformStart {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnTransformStart params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void UTransformationInterface::OnRestoreStart(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationInterface.OnRestoreStart"));
    struct Params_OnRestoreStart {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnRestoreStart params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void UTransformationInterface::OnTransformSpawnSpawned(AActor* Instigator, AActor* OriginalActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationInterface.OnTransformSpawnSpawned"));
    struct Params_OnTransformSpawnSpawned {
        AActor* Instigator; // 0x0
        AActor* OriginalActor; // 0x8
    }; // Size: 0x10
    Params_OnTransformSpawnSpawned params{};
    params.Instigator = (AActor*)Instigator;
    params.OriginalActor = (AActor*)OriginalActor;
    ProcessEvent(func, &params);
}
void UTransformationInterface::OnTransformCompleteSpawned(AActor* Instigator, AActor* OriginalActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationInterface.OnTransformCompleteSpawned"));
    struct Params_OnTransformCompleteSpawned {
        AActor* Instigator; // 0x0
        AActor* OriginalActor; // 0x8
    }; // Size: 0x10
    Params_OnTransformCompleteSpawned params{};
    params.Instigator = (AActor*)Instigator;
    params.OriginalActor = (AActor*)OriginalActor;
    ProcessEvent(func, &params);
}
void UTransformationInterface::OnTransformSpawn(AActor* Instigator, AActor* TransformedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationInterface.OnTransformSpawn"));
    struct Params_OnTransformSpawn {
        AActor* Instigator; // 0x0
        AActor* TransformedActor; // 0x8
    }; // Size: 0x10
    Params_OnTransformSpawn params{};
    params.Instigator = (AActor*)Instigator;
    params.TransformedActor = (AActor*)TransformedActor;
    ProcessEvent(func, &params);
}
void UTransformationInterface::OnTransformComplete(AActor* Instigator, AActor* TransformedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationInterface.OnTransformComplete"));
    struct Params_OnTransformComplete {
        AActor* Instigator; // 0x0
        AActor* TransformedActor; // 0x8
    }; // Size: 0x10
    Params_OnTransformComplete params{};
    params.Instigator = (AActor*)Instigator;
    params.TransformedActor = (AActor*)TransformedActor;
    ProcessEvent(func, &params);
}
void UTransformationInterface::OnRestoreStartSpawned(AActor* Instigator, AActor* OriginalActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationInterface.OnRestoreStartSpawned"));
    struct Params_OnRestoreStartSpawned {
        AActor* Instigator; // 0x0
        AActor* OriginalActor; // 0x8
    }; // Size: 0x10
    Params_OnRestoreStartSpawned params{};
    params.Instigator = (AActor*)Instigator;
    params.OriginalActor = (AActor*)OriginalActor;
    ProcessEvent(func, &params);
}
void UTransformationInterface::OnRestoreComplete(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationInterface.OnRestoreComplete"));
    struct Params_OnRestoreComplete {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnRestoreComplete params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
