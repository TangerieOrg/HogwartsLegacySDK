#include "ASocialNavigatorController.hpp"
#include "AWalkToLocationAutomationAIController.hpp"
AWalkToLocationAutomationAIController* AWalkToLocationAutomationAIController::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WalkToLocationAutomationAIController");
    return (AWalkToLocationAutomationAIController*)res;
}
