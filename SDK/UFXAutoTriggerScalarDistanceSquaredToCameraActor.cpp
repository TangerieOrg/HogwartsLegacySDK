#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarDistanceSquaredToCameraActor.hpp"
UFXAutoTriggerScalarDistanceSquaredToCameraActor* UFXAutoTriggerScalarDistanceSquaredToCameraActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarDistanceSquaredToCameraActor");
    return (UFXAutoTriggerScalarDistanceSquaredToCameraActor*)res;
}
