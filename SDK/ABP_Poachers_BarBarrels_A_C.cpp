#include "AActor.hpp"
#include "ABP_Poachers_BarBarrels_A_C.hpp"
#include "UChildActorComponent.hpp"
#include "UPhysicalResponseComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Poachers_BarBarrels_A_C* ABP_Poachers_BarBarrels_A_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Objects/Population/BP_Poachers_BarBarrels_A.BP_Poachers_BarBarrels_A_C");
    return (ABP_Poachers_BarBarrels_A_C*)res;
}
