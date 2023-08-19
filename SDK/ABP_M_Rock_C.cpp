#include "AActor.hpp"
#include "ABP_M_Rock_C.hpp"
#include "EEnvironment\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPropList.hpp"
#include "FRandomStream.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UObjectStateComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_M_Rock_C::ExecuteUbergraph_BP_M_Rock(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Rock.BP_M_Rock_C.ExecuteUbergraph_BP_M_Rock"));
    struct Params_ExecuteUbergraph_BP_M_Rock {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_M_Rock params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
ABP_M_Rock_C* ABP_M_Rock_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/BP_M_Rock.BP_M_Rock_C");
    return (ABP_M_Rock_C*)res;
}
void ABP_M_Rock_C::UserConstructionScript0(FPropList Props, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, int32_t CallFunc_PropSort_NewPropIndex, EEnvironment::Type CallFunc_PropSort_EnnvironmentOutput, int32_t CallFunc_PropSort_NewEnvInt) {}
void ABP_M_Rock_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Rock.BP_M_Rock_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
