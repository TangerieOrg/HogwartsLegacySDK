#include "ABP_DeadNPC_Dressing_C.hpp"
#include "ABP_DeadNPC_Dressing_WandBlast_C.hpp"
ABP_DeadNPC_Dressing_WandBlast_C* ABP_DeadNPC_Dressing_WandBlast_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/WorldEvents/Blueprints/DeadNpc/Placeable_DeadNPC/DeadNPC_Variations/DeadNPC_WandBlast/BP_DeadNPC_Dressing_WandBlast.BP_DeadNPC_Dressing_WandBlast_C");
    return (ABP_DeadNPC_Dressing_WandBlast_C*)res;
}
