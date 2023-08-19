#include "AActor.hpp"
#include "ABP_HW_Single_Cannister_Lid_Mystery_C.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_HW_Single_Cannister_Lid_Mystery_C* ABP_HW_Single_Cannister_Lid_Mystery_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Meshes/Props/BP_HW_Single_Cannister_Lid_Mystery.BP_HW_Single_Cannister_Lid_Mystery_C");
    return (ABP_HW_Single_Cannister_Lid_Mystery_C*)res;
}
