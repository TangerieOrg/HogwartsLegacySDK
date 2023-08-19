#include "ABP_L_Tents_C.hpp"
#include "ATent.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
ABP_L_Tents_C* ABP_L_Tents_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/BanditCamps/BP_L_Tents.BP_L_Tents_C");
    return (ABP_L_Tents_C*)res;
}
void ABP_L_Tents_C::SetTentMesh0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/BanditCamps/BP_L_Tents.BP_L_Tents_C.SetTentMesh"));
    struct Params_SetTentMesh {
    }; // Size: 0x0
    Params_SetTentMesh params{};
    ProcessEvent(func, &params);
}
void ABP_L_Tents_C::UserConstructionScript() {}
void ABP_L_Tents_C::ExecuteUbergraph_BP_L_Tents(int32_t EntryPoint) {}
