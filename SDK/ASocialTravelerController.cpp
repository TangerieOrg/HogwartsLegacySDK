#include "ASocialAIController.hpp"
#include "ASocialTravelerController.hpp"
ASocialTravelerController* ASocialTravelerController::StaticClass() {
    static auto res = find_uobject("Class /Script/SocialDisplay.SocialTravelerController");
    return (ASocialTravelerController*)res;
}
