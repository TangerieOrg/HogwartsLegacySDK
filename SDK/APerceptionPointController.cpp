#include "AAIController.hpp"
#include "APerceptionPointController.hpp"
APerceptionPointController* APerceptionPointController::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PerceptionPointController");
    return (APerceptionPointController*)res;
}
