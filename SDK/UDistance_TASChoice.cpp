#include "ENPC_TurnAssistState.hpp"
#include "UDistance_TASChoice.hpp"
#include "UNPC_TurnAssistStateChoice.hpp"
UDistance_TASChoice* UDistance_TASChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Distance_TASChoice");
    return (UDistance_TASChoice*)res;
}
