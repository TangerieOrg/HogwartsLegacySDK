#include "UAblAbilityTask.hpp"
#include "UAblDisableCognitionSenseTask.hpp"
#include "UClass.hpp"
UAblDisableCognitionSenseTask* UAblDisableCognitionSenseTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblDisableCognitionSenseTask");
    return (UAblDisableCognitionSenseTask*)res;
}
