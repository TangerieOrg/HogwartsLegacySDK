#include "ENPC_TurnAssistState.hpp"
#include "UForce_TASChoice.hpp"
#include "UNPC_TurnAssistStateChoice.hpp"
UForce_TASChoice* UForce_TASChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Force_TASChoice");
    return (UForce_TASChoice*)res;
}
