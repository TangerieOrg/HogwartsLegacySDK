#include "AActor.hpp"
#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskEnableTriggerOverlapForPT.hpp"
UAIPerformTaskEnableTriggerOverlapForPT* UAIPerformTaskEnableTriggerOverlapForPT::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskEnableTriggerOverlapForPT");
    return (UAIPerformTaskEnableTriggerOverlapForPT*)res;
}
