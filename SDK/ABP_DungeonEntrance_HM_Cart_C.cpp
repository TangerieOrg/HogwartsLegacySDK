#include "AActor.hpp"
#include "ABP_DungeonEntrance_HM_Cart_C.hpp"
#include "ETimelineDirection\Type.hpp"
#include "E_DoorState\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStatList.hpp"
#include "UAkComponent.hpp"
#include "UFunction.hpp"
#include "UObjectStateComponent.hpp"
#include "UObjectStateInfo.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USphereComponent.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTimelineComponent.hpp"
ABP_DungeonEntrance_HM_Cart_C* ABP_DungeonEntrance_HM_Cart_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Dungeons/BluePrints/BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C");
    return (ABP_DungeonEntrance_HM_Cart_C*)res;
}
void ABP_DungeonEntrance_HM_Cart_C::Timeline_0__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.Timeline_0__UpdateFunc"));
    struct Params_Timeline_0__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_0__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_DungeonEntrance_HM_Cart_C::HandleStatCheckRevelio() {}
void ABP_DungeonEntrance_HM_Cart_C::Delegate_Stats_Updated(FName Key, int32_t Value, int32_t Delta, bool CallFunc_EqualEqual_IntInt_ReturnValue, FName CallFunc_GetStatName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.Delegate Stats Updated"));
    struct Params_Delegate_Stats_Updated {
        FName Key; // 0x0
        int32_t Value; // 0x8
        int32_t Delta; // 0xc
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x10
        char pad_11[0x3];
        FName CallFunc_GetStatName_ReturnValue; // 0x14
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_Delegate_Stats_Updated params{};
    params.Key = (FName)Key;
    params.Value = (int32_t)Value;
    params.Delta = (int32_t)Delta;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_GetStatName_ReturnValue = (FName)CallFunc_GetStatName_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_DungeonEntrance_HM_Cart_C::Timeline_0__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.Timeline_0__FinishedFunc"));
    struct Params_Timeline_0__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_0__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_DungeonEntrance_HM_Cart_C::ToggleRevelioHighlight(bool CanHightlight, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.ToggleRevelioHighlight"));
    struct Params_ToggleRevelioHighlight {
        bool CanHightlight; // 0x0
        char pad_1[0x7];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ToggleRevelioHighlight params{};
    params.CanHightlight = (bool)CanHightlight;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_DungeonEntrance_HM_Cart_C::Timeline_1__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.Timeline_1__UpdateFunc"));
    struct Params_Timeline_1__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_1__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_DungeonEntrance_HM_Cart_C::Timeline_1__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.Timeline_1__FinishedFunc"));
    struct Params_Timeline_1__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_1__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_DungeonEntrance_HM_Cart_C::BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_DungeonEntrance_HM_Cart_C::BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ABP_DungeonEntrance_HM_Cart_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Dungeons/BluePrints/BP_DungeonEntrance_HM_Cart.BP_DungeonEntrance_HM_Cart_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_DungeonEntrance_HM_Cart_C::ExecuteUbergraph_BP_DungeonEntrance_HM_Cart(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue) {}
