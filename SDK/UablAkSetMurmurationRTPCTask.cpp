#include "EMurmurationValueType.hpp"
#include "UAblAbilityTask.hpp"
#include "UablAkSetMurmurationRTPCTask.hpp"
UablAkSetMurmurationRTPCTask* UablAkSetMurmurationRTPCTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablAkSetMurmurationRTPCTask");
    return (UablAkSetMurmurationRTPCTask*)res;
}
