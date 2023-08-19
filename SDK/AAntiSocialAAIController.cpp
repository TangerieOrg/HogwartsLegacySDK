#include "AAntiSocialAAIController.hpp"
#include "ASocialAIController.hpp"
AAntiSocialAAIController* AAntiSocialAAIController::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AntiSocialAAIController");
    return (AAntiSocialAAIController*)res;
}
