#include "UAblAnimRateGetter.hpp"
#include "UAblAnimRateGetter_RagdollBehavior.hpp"
UAblAnimRateGetter_RagdollBehavior* UAblAnimRateGetter_RagdollBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimRateGetter_RagdollBehavior");
    return (UAblAnimRateGetter_RagdollBehavior*)res;
}
