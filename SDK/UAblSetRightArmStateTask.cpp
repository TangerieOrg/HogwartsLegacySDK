#include "ERightArmPriority\Type.hpp"
#include "ERightArmState\Type.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblSetRightArmStateTask.hpp"
UAblSetRightArmStateTask* UAblSetRightArmStateTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSetRightArmStateTask");
    return (UAblSetRightArmStateTask*)res;
}
