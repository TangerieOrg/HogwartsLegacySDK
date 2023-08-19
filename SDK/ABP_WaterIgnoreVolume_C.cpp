#include "ABP_WaterIgnoreVolume_C.hpp"
#include "AWaterIgnoreVolume.hpp"
ABP_WaterIgnoreVolume_C* ABP_WaterIgnoreVolume_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/BP_WaterIgnoreVolume.BP_WaterIgnoreVolume_C");
    return (ABP_WaterIgnoreVolume_C*)res;
}
