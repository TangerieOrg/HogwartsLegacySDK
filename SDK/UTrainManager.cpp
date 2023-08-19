#include "ATrain.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTrainManager.hpp"
#include "UTrainNavigationSplineComponent.hpp"
#include "UTrainSettings.hpp"
UTrainManager* UTrainManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TrainManager");
    return (UTrainManager*)res;
}
void UTrainManager::SetTrainDistanceAlongTrack(float Distance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TrainManager.SetTrainDistanceAlongTrack"));
    struct Params_SetTrainDistanceAlongTrack {
        float Distance; // 0x0
    }; // Size: 0x4
    Params_SetTrainDistanceAlongTrack params{};
    params.Distance = (float)Distance;
    ProcessEvent(func, &params);
}
void UTrainManager::SetTrainSpeed(float Speed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TrainManager.SetTrainSpeed"));
    struct Params_SetTrainSpeed {
        float Speed; // 0x0
    }; // Size: 0x4
    Params_SetTrainSpeed params{};
    params.Speed = (float)Speed;
    ProcessEvent(func, &params);
}
void UTrainManager::SetupTrain() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TrainManager.SetupTrain"));
    struct Params_SetupTrain {
    }; // Size: 0x0
    Params_SetupTrain params{};
    ProcessEvent(func, &params);
}
void UTrainManager::SetTrainPositionAlongTrack(FVector Position) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TrainManager.SetTrainPositionAlongTrack"));
    struct Params_SetTrainPositionAlongTrack {
        FVector Position; // 0x0
    }; // Size: 0xc
    Params_SetTrainPositionAlongTrack params{};
    params.Position = (FVector)Position;
    ProcessEvent(func, &params);
}
UTrainManager* UTrainManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TrainManager.Get"));
    struct Params_Get {
        UTrainManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTrainManager*)params.ReturnValue;
}
void UTrainManager::CleanupTrain() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TrainManager.CleanupTrain"));
    struct Params_CleanupTrain {
    }; // Size: 0x0
    Params_CleanupTrain params{};
    ProcessEvent(func, &params);
}
