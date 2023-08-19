#include "EContextTaskOperationType\Type.hpp"
#include "FInputContextWithType.hpp"
#include "UAblAbilityTask.hpp"
#include "UablInputContextTask.hpp"
UablInputContextTask* UablInputContextTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablInputContextTask");
    return (UablInputContextTask*)res;
}
