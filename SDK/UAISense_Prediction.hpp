#pragma once
#include <cstdint>
#include "FAIPredictionEvent.hpp"
#include "UAISense.hpp"
class APawn;
class AActor;
class AAIController;
#pragma pack(push, 1)
class UAISense_Prediction : public UAISense {
public:
    TArray<FAIPredictionEvent> RegisteredEvents; // 0x80
    static UAISense_Prediction* StaticClass();
    static void RequestPawnPredictionEvent(APawn* Requestor, AActor* PredictedActor, float PredictionTime);
    static void RequestControllerPredictionEvent(AAIController* Requestor, AActor* PredictedActor, float PredictionTime);
}; // Size: 0x90
#pragma pack(pop)
