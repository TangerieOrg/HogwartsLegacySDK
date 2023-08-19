#include "EAccessibilityAudioCueEventType.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblPostAccessibilityAudioCueTask.hpp"
UAblPostAccessibilityAudioCueTask* UAblPostAccessibilityAudioCueTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPostAccessibilityAudioCueTask");
    return (UAblPostAccessibilityAudioCueTask*)res;
}
