#include "UCogGroupBestTargetProcess.hpp"
#include "UObject.hpp"
UCogGroupBestTargetProcess* UCogGroupBestTargetProcess::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupBestTargetProcess");
    return (UCogGroupBestTargetProcess*)res;
}
