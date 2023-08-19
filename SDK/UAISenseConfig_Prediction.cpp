#include "UAISenseConfig.hpp"
#include "UAISenseConfig_Prediction.hpp"
UAISenseConfig_Prediction* UAISenseConfig_Prediction::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISenseConfig_Prediction");
    return (UAISenseConfig_Prediction*)res;
}
