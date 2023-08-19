#include "UCogGroupBestTargetProcess.hpp"
#include "UCogGroupBestTargetProcess_TrackTargetIsWeak.hpp"
UCogGroupBestTargetProcess_TrackTargetIsWeak* UCogGroupBestTargetProcess_TrackTargetIsWeak::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupBestTargetProcess_TrackTargetIsWeak");
    return (UCogGroupBestTargetProcess_TrackTargetIsWeak*)res;
}
