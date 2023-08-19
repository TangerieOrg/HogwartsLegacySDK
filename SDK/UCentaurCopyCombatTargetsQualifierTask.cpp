#include "UCentaurCopyCombatTargetsQualifierTask.hpp"
#include "UQualifierTask.hpp"
UCentaurCopyCombatTargetsQualifierTask* UCentaurCopyCombatTargetsQualifierTask::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.CentaurCopyCombatTargetsQualifierTask");
    return (UCentaurCopyCombatTargetsQualifierTask*)res;
}
