#include "ABP_SkinFX_EnemyWipeIn_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_EnemyWipeIn_C* ABP_SkinFX_EnemyWipeIn_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_EnemyWipeIn.BP_SkinFX_EnemyWipeIn_C");
    return (ABP_SkinFX_EnemyWipeIn_C*)res;
}
