#include "AAIController.hpp"
#include "ADetourCrowdAIController.hpp"
ADetourCrowdAIController* ADetourCrowdAIController::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.DetourCrowdAIController");
    return (ADetourCrowdAIController*)res;
}
