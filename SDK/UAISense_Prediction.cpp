#include "AAIController.hpp"
#include "AActor.hpp"
#include "APawn.hpp"
#include "FAIPredictionEvent.hpp"
#include "UAISense.hpp"
#include "UAISense_Prediction.hpp"
#include "UFunction.hpp"
UAISense_Prediction* UAISense_Prediction::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISense_Prediction");
    return (UAISense_Prediction*)res;
}
void UAISense_Prediction::RequestPawnPredictionEvent(APawn* Requestor, AActor* PredictedActor, float PredictionTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AISense_Prediction.RequestPawnPredictionEvent"));
    struct Params_RequestPawnPredictionEvent {
        APawn* Requestor; // 0x0
        AActor* PredictedActor; // 0x8
        float PredictionTime; // 0x10
    }; // Size: 0x14
    Params_RequestPawnPredictionEvent params{};
    params.Requestor = (APawn*)Requestor;
    params.PredictedActor = (AActor*)PredictedActor;
    params.PredictionTime = (float)PredictionTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAISense_Prediction::RequestControllerPredictionEvent(AAIController* Requestor, AActor* PredictedActor, float PredictionTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AISense_Prediction.RequestControllerPredictionEvent"));
    struct Params_RequestControllerPredictionEvent {
        AAIController* Requestor; // 0x0
        AActor* PredictedActor; // 0x8
        float PredictionTime; // 0x10
    }; // Size: 0x14
    Params_RequestControllerPredictionEvent params{};
    params.Requestor = (AAIController*)Requestor;
    params.PredictedActor = (AActor*)PredictedActor;
    params.PredictionTime = (float)PredictionTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
