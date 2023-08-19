#include "UAITask.hpp"
#include "UAITask_LockLogic.hpp"
UAITask_LockLogic* UAITask_LockLogic::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AITask_LockLogic");
    return (UAITask_LockLogic*)res;
}
