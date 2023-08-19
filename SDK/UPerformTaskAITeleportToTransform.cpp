#include "ATargetPoint.hpp"
#include "UAIPerformTaskBase.hpp"
#include "UPerformTaskAITeleportToTransform.hpp"
UPerformTaskAITeleportToTransform* UPerformTaskAITeleportToTransform::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PerformTaskAITeleportToTransform");
    return (UPerformTaskAITeleportToTransform*)res;
}
