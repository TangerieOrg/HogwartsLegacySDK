#include "UPlayWithLeapingToadstoolStatQualifierTask.hpp"
#include "UQualifierTask.hpp"
UPlayWithLeapingToadstoolStatQualifierTask* UPlayWithLeapingToadstoolStatQualifierTask::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.PlayWithLeapingToadstoolStatQualifierTask");
    return (UPlayWithLeapingToadstoolStatQualifierTask*)res;
}
