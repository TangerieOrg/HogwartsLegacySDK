#include "ECollisionChannel.hpp"
#include "ECollisionResponse.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblSetCollisionChannelResponseTask.hpp"
UAblSetCollisionChannelResponseTask* UAblSetCollisionChannelResponseTask::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblSetCollisionChannelResponseTask");
    return (UAblSetCollisionChannelResponseTask*)res;
}
