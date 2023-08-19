#include "ASocialSplineController.hpp"
#include "ASocialTravelerController.hpp"
ASocialSplineController* ASocialSplineController::StaticClass() {
    static auto res = find_uobject("Class /Script/SocialDisplay.SocialSplineController");
    return (ASocialSplineController*)res;
}
