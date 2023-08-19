#include "UCogGroupBestTargetProcess.hpp"
#include "UCogGroupBestTargetProcess_TrackTargetIsInAttackAwareness.hpp"
UCogGroupBestTargetProcess_TrackTargetIsInAttackAwareness* UCogGroupBestTargetProcess_TrackTargetIsInAttackAwareness::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupBestTargetProcess_TrackTargetIsInAttackAwareness");
    return (UCogGroupBestTargetProcess_TrackTargetIsInAttackAwareness*)res;
}
