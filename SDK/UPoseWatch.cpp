#include "FColor.hpp"
#include "UEdGraphNode.hpp"
#include "UObject.hpp"
#include "UPoseWatch.hpp"
UPoseWatch* UPoseWatch::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PoseWatch");
    return (UPoseWatch*)res;
}
