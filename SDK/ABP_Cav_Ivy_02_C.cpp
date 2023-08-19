#include "AActor.hpp"
#include "ABP_Cav_Ivy_02_C.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Cav_Ivy_02_C* ABP_Cav_Ivy_02_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Cavern_Dungeon/Blueprints/Foliage/BP_Cav_Ivy_02.BP_Cav_Ivy_02_C");
    return (ABP_Cav_Ivy_02_C*)res;
}
