#include "UBP_PlayerPerceptionPoint_C.hpp"
#include "UPlayerPerceptionPointComponent.hpp"
UBP_PlayerPerceptionPoint_C* UBP_PlayerPerceptionPoint_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Perception/BP_PlayerPerceptionPoint.BP_PlayerPerceptionPoint_C");
    return (UBP_PlayerPerceptionPoint_C*)res;
}
