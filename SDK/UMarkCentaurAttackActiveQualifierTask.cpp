#include "UMarkCentaurAttackActiveQualifierTask.hpp"
#include "UQualifierTask.hpp"
UMarkCentaurAttackActiveQualifierTask* UMarkCentaurAttackActiveQualifierTask::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.MarkCentaurAttackActiveQualifierTask");
    return (UMarkCentaurAttackActiveQualifierTask*)res;
}
