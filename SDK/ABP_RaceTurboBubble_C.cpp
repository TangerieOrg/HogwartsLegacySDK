#include "AActor.hpp"
#include "ABP_RaceTurboBubble_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FDialogueConversationReference.hpp"
#include "FHitResult.hpp"
#include "FMasterTickThrottlerSettings.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStatList.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USphereComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_RaceTurboBubble_C* ABP_RaceTurboBubble_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Mechanics/Broom/RacePickups/BP_RaceTurboBubble.BP_RaceTurboBubble_C");
    return (ABP_RaceTurboBubble_C*)res;
}
void ABP_RaceTurboBubble_C::ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/RacePickups/BP_RaceTurboBubble.BP_RaceTurboBubble_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_RaceTurboBubble_C::BndEvt__Sphere1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/RacePickups/BP_RaceTurboBubble.BP_RaceTurboBubble_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__Sphere1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__Sphere1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_RaceTurboBubble_C::ToggleVizAndColl(bool On) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/RacePickups/BP_RaceTurboBubble.BP_RaceTurboBubble_C.ToggleVizAndColl"));
    struct Params_ToggleVizAndColl {
        bool On; // 0x0
    }; // Size: 0x1
    Params_ToggleVizAndColl params{};
    params.On = (bool)On;
    ProcessEvent(func, &params);
}
void ABP_RaceTurboBubble_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/RacePickups/BP_RaceTurboBubble.BP_RaceTurboBubble_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_RaceTurboBubble_C::SetVisible() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/RacePickups/BP_RaceTurboBubble.BP_RaceTurboBubble_C.SetVisible"));
    struct Params_SetVisible {
    }; // Size: 0x0
    Params_SetVisible params{};
    ProcessEvent(func, &params);
}
void ABP_RaceTurboBubble_C::ReceiveTick0(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/RacePickups/BP_RaceTurboBubble.BP_RaceTurboBubble_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_RaceTurboBubble_C::ExecuteUbergraph_BP_RaceTurboBubble(int32_t EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, FMasterTickThrottlerSettings K2Node_MakeStruct_MasterTickThrottlerSettings, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
