#include "ASocialNavigatorController.hpp"
#include "ASocialTravelerController.hpp"
ASocialNavigatorController* ASocialNavigatorController::StaticClass() {
    static auto res = find_uobject("Class /Script/SocialDisplay.SocialNavigatorController");
    return (ASocialNavigatorController*)res;
}
