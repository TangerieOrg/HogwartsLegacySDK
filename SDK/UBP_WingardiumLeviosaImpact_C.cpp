#include "AActor.hpp"
#include "ABP_Shell_Levioso_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ETraceTypeQuery.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBP_WingardiumLeviosaImpact_C.hpp"
#include "UFunction.hpp"
#include "UParticleSystemComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "USpellImpactComponent.hpp"
UBP_WingardiumLeviosaImpact_C* UBP_WingardiumLeviosaImpact_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/MunitionImpact/BP_WingardiumLeviosaImpact.BP_WingardiumLeviosaImpact_C");
    return (UBP_WingardiumLeviosaImpact_C*)res;
}
void UBP_WingardiumLeviosaImpact_C::ReceiveTick(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/MunitionImpact/BP_WingardiumLeviosaImpact.BP_WingardiumLeviosaImpact_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBP_WingardiumLeviosaImpact_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/MunitionImpact/BP_WingardiumLeviosaImpact.BP_WingardiumLeviosaImpact_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void UBP_WingardiumLeviosaImpact_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/MunitionImpact/BP_WingardiumLeviosaImpact.BP_WingardiumLeviosaImpact_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void UBP_WingardiumLeviosaImpact_C::ExecuteUbergraph_BP_WingardiumLeviosaImpact(int32_t EntryPoint, AActor* CallFunc_GetOwner_ReturnValue, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue) {}
