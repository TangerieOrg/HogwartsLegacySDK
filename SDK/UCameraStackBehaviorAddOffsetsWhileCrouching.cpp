#include "FVector.hpp"
#include "UCameraStackBehaviorAddOffsetsWhileCrouching.hpp"
#include "UCameraStackBehaviorBlend.hpp"
UCameraStackBehaviorAddOffsetsWhileCrouching* UCameraStackBehaviorAddOffsetsWhileCrouching::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackBehaviorAddOffsetsWhileCrouching");
    return (UCameraStackBehaviorAddOffsetsWhileCrouching*)res;
}
