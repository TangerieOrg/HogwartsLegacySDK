#include "ECollisionChannel.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblSetCollisionChannelTask.hpp"
UAblSetCollisionChannelTask* UAblSetCollisionChannelTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblSetCollisionChannelTask");
    return (UAblSetCollisionChannelTask*)res;
}
