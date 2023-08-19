#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UObject.hpp"
class UTrainSettings;
class ATrain;
class UTrainNavigationSplineComponent;
#pragma pack(push, 1)
class UTrainManager : public UObject {
public:
    char pad_28[0x10];
    UTrainSettings* TrainSettings; // 0x38
    ATrain* TrainEngine; // 0x40
    ATrain* CoalCar; // 0x48
    TArray<ATrain*> PassengerCars; // 0x50
    UTrainNavigationSplineComponent* NavigationSpline; // 0x60
    char pad_68[0x68];
    static UTrainManager* StaticClass();
    void SetupTrain();
    void SetTrainSpeed(float Speed);
    void SetTrainPositionAlongTrack(FVector Position);
    void SetTrainDistanceAlongTrack(float Distance);
    static UTrainManager* Get();
    void CleanupTrain();
}; // Size: 0xd0
#pragma pack(pop)
