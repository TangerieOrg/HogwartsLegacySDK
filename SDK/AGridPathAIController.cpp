#include "AAIController.hpp"
#include "AGridPathAIController.hpp"
AGridPathAIController* AGridPathAIController::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.GridPathAIController");
    return (AGridPathAIController*)res;
}
