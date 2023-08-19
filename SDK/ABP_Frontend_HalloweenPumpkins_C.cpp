#include "AActor.hpp"
#include "ABP_Frontend_HalloweenPumpkins_C.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Frontend_HalloweenPumpkins_C* ABP_Frontend_HalloweenPumpkins_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/UI/Frontend/BP_Frontend_HalloweenPumpkins.BP_Frontend_HalloweenPumpkins_C");
    return (ABP_Frontend_HalloweenPumpkins_C*)res;
}
