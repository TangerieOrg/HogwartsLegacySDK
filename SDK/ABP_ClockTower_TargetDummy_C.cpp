#include "AActor.hpp"
#include "ABP_ClockTower_TargetDummy_C.hpp"
#include "UObjectStateComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_ClockTower_TargetDummy_C* ABP_ClockTower_TargetDummy_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Blueprints/BP_ClockTower_TargetDummy.BP_ClockTower_TargetDummy_C");
    return (ABP_ClockTower_TargetDummy_C*)res;
}
