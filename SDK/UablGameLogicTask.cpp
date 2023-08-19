#include "FName_GameLogicVarBool.hpp"
#include "FName_GameLogicVarInt32.hpp"
#include "UAblAbilityTask.hpp"
#include "UablGameLogicTask.hpp"
UablGameLogicTask* UablGameLogicTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablGameLogicTask");
    return (UablGameLogicTask*)res;
}
