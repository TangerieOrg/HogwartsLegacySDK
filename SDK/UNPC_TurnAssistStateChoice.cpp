#include "UNPC_TurnAssistStateChoice.hpp"
#include "UObject.hpp"
UNPC_TurnAssistStateChoice* UNPC_TurnAssistStateChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_TurnAssistStateChoice");
    return (UNPC_TurnAssistStateChoice*)res;
}
