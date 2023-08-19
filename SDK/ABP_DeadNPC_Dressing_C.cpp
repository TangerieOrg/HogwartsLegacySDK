#include "AActor.hpp"
#include "ABP_DeadNPC_Dressing_C.hpp"
#include "USceneComponent.hpp"
ABP_DeadNPC_Dressing_C* ABP_DeadNPC_Dressing_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/WorldEvents/Blueprints/DeadNpc/Placeable_DeadNPC/BP_DeadNPC_Dressing.BP_DeadNPC_Dressing_C");
    return (ABP_DeadNPC_Dressing_C*)res;
}
