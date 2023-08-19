#include "ABP_PerceptionPoint_C.hpp"
#include "AEnemy_PerceptionPoint.hpp"
#include "UBillboardComponent.hpp"
#include "USceneComponent.hpp"
ABP_PerceptionPoint_C* ABP_PerceptionPoint_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Perception/BP_PerceptionPoint.BP_PerceptionPoint_C");
    return (ABP_PerceptionPoint_C*)res;
}
