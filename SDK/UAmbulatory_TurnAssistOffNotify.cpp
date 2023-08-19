#include "UAmbulatory_TurnAssistOffNotify.hpp"
#include "UAnimNotifyState.hpp"
UAmbulatory_TurnAssistOffNotify* UAmbulatory_TurnAssistOffNotify::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.Ambulatory_TurnAssistOffNotify");
    return (UAmbulatory_TurnAssistOffNotify*)res;
}
