#include "AActor.hpp"
#include "ABP_WaterDummyCollision_C.hpp"
#include "UWaterCollisionComponent.hpp"
ABP_WaterDummyCollision_C* ABP_WaterDummyCollision_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Flow/Blueprints/BP_WaterDummyCollision.BP_WaterDummyCollision_C");
    return (ABP_WaterDummyCollision_C*)res;
}
