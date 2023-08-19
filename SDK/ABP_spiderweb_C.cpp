#include "AActor.hpp"
#include "ABP_CaveInEvent_C.hpp"
#include "ABP_spiderweb_C.hpp"
#include "ASpiderWeb_Interactive.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FHitResult.hpp"
#include "FLinearColor.hpp"
#include "FMeshList.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UBillboardComponent.hpp"
#include "UFunction.hpp"
#include "UIncendioComponent.hpp"
#include "UInteractiveObjectComponent.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UOdcAuthoredObstacleSetupComponent.hpp"
#include "UOdcObstacleComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "UStaticMeshComponent.hpp"
UPrimitiveComponent* ABP_spiderweb_C::GetMainPrimitive() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.GetMainPrimitive"));
    struct Params_GetMainPrimitive {
        UPrimitiveComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMainPrimitive params{};
    ProcessEvent(func, &params);
    return (UPrimitiveComponent*)params.ReturnValue;
}
ABP_spiderweb_C* ABP_spiderweb_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C");
    return (ABP_spiderweb_C*)res;
}
void ABP_spiderweb_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
bool ABP_spiderweb_C::StartFreeze(AActor* Instigator, float Amount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.StartFreeze"));
    struct Params_StartFreeze {
        AActor* Instigator; // 0x0
        float Amount; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_StartFreeze params{};
    params.Instigator = (AActor*)Instigator;
    params.Amount = (float)Amount;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName ABP_spiderweb_C::GetMainBone() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.GetMainBone"));
    struct Params_GetMainBone {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMainBone params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void ABP_spiderweb_C::WebOnFire__DelegateSignature(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.WebOnFire__DelegateSignature"));
    struct Params_WebOnFire__DelegateSignature {
        FVector Location; // 0x0
    }; // Size: 0xc
    Params_WebOnFire__DelegateSignature params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
}
bool ABP_spiderweb_C::DecreaseFire(float decreaseAmount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.DecreaseFire"));
    struct Params_DecreaseFire {
        float decreaseAmount; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_DecreaseFire params{};
    params.decreaseAmount = (float)decreaseAmount;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_spiderweb_C::IncreaseFire(float increaseAmount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.IncreaseFire"));
    struct Params_IncreaseFire {
        float increaseAmount; // 0x0
        FVector Location; // 0x4
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IncreaseFire params{};
    params.increaseAmount = (float)increaseAmount;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_spiderweb_C::WebFrozen__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.WebFrozen__DelegateSignature"));
    struct Params_WebFrozen__DelegateSignature {
    }; // Size: 0x0
    Params_WebFrozen__DelegateSignature params{};
    ProcessEvent(func, &params);
}
bool ABP_spiderweb_C::IsPointOnFire(FVector Point, bool& OnFire) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.IsPointOnFire"));
    struct Params_IsPointOnFire {
        FVector Point; // 0x0
        bool OnFire; // 0xc
        bool ReturnValue; // 0xd
    }; // Size: 0xe
    Params_IsPointOnFire params{};
    params.Point = (FVector)Point;
    params.OnFire = (bool)OnFire;
    ProcessEvent(func, &params);
    OnFire = params.OnFire;
    return (bool)params.ReturnValue;
}
bool ABP_spiderweb_C::StartFire(float Amount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.StartFire"));
    struct Params_StartFire {
        float Amount; // 0x0
        FVector Location; // 0x4
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_StartFire params{};
    params.Amount = (float)Amount;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_spiderweb_C::SetupWeb(UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32_t CallFunc_SelectMesh_NewPropIndex) {}
void ABP_spiderweb_C::SetupSfx(UAkComponent* AkComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.SetupSfx"));
    struct Params_SetupSfx {
        UAkComponent* AkComponent; // 0x0
    }; // Size: 0x8
    Params_SetupSfx params{};
    params.AkComponent = (UAkComponent*)AkComponent;
    ProcessEvent(func, &params);
}
void ABP_spiderweb_C::UserConstructionScript(bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_GetCollisionScale_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, int32_t Temp_int_Array_Index_Variable, UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UMaterialInterface* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        bool CallFunc_Not_PreBool_ReturnValue; // 0x0
        char pad_1[0x3];
        FVector CallFunc_GetCollisionScale_ReturnValue; // 0x4
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x10
        FRandomStream CallFunc_MakeRandomStream_RandomStream; // 0x1c
        int32_t Temp_int_Array_Index_Variable; // 0x24
        UMaterialInstanceDynamic* CallFunc_Array_Get_Item; // 0x28
        int32_t Temp_int_Loop_Counter_Variable; // 0x30
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x34
        TArray<UMaterialInterface*> CallFunc_GetMaterials_ReturnValue; // 0x38
        int32_t CallFunc_Array_Length_ReturnValue; // 0x48
        char pad_4c[0x4];
        UMaterialInterface* CallFunc_Array_Get_Item_1; // 0x50
        bool CallFunc_Less_IntInt_ReturnValue; // 0x58
        char pad_59[0x7];
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x60
        int32_t CallFunc_Array_Add_ReturnValue; // 0x68
    }; // Size: 0x6c
    Params_UserConstructionScript params{};
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_GetCollisionScale_ReturnValue = (FVector)CallFunc_GetCollisionScale_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_MakeRandomStream_RandomStream = (FRandomStream)CallFunc_MakeRandomStream_RandomStream;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Get_Item = (UMaterialInstanceDynamic*)CallFunc_Array_Get_Item;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetMaterials_ReturnValue = (TArray<UMaterialInterface*>)CallFunc_GetMaterials_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (UMaterialInterface*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetMaterials_ReturnValue = params.CallFunc_GetMaterials_ReturnValue;
}
void ABP_spiderweb_C::OnReset() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.OnReset"));
    struct Params_OnReset {
    }; // Size: 0x0
    Params_OnReset params{};
    ProcessEvent(func, &params);
}
void ABP_spiderweb_C::OnAttemptToFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.OnAttemptToFreeze"));
    struct Params_OnAttemptToFreeze {
    }; // Size: 0x0
    Params_OnAttemptToFreeze params{};
    ProcessEvent(func, &params);
}
void ABP_spiderweb_C::OnCaughtFire(UIncendioComponent* IncendioComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.OnCaughtFire"));
    struct Params_OnCaughtFire {
        UIncendioComponent* IncendioComponent; // 0x0
    }; // Size: 0x8
    Params_OnCaughtFire params{};
    params.IncendioComponent = (UIncendioComponent*)IncendioComponent;
    ProcessEvent(func, &params);
}
void ABP_spiderweb_C::OnFailedToFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.OnFailedToFreeze"));
    struct Params_OnFailedToFreeze {
    }; // Size: 0x0
    Params_OnFailedToFreeze params{};
    ProcessEvent(func, &params);
}
void ABP_spiderweb_C::OnAttemptToSetOnFire(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.OnAttemptToSetOnFire"));
    struct Params_OnAttemptToSetOnFire {
        FVector Location; // 0x0
    }; // Size: 0xc
    Params_OnAttemptToSetOnFire params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
}
void ABP_spiderweb_C::OnFailedToLight() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.OnFailedToLight"));
    struct Params_OnFailedToLight {
    }; // Size: 0x0
    Params_OnFailedToLight params{};
    ProcessEvent(func, &params);
}
void ABP_spiderweb_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_spiderweb_C::WebFreezing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.WebFreezing"));
    struct Params_WebFreezing {
    }; // Size: 0x0
    Params_WebFreezing params{};
    ProcessEvent(func, &params);
}
void ABP_spiderweb_C::OnThaw(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.OnThaw"));
    struct Params_OnThaw {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnThaw params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_spiderweb_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ABP_spiderweb_C::OnCompletelyCharred() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.OnCompletelyCharred"));
    struct Params_OnCompletelyCharred {
    }; // Size: 0x0
    Params_OnCompletelyCharred params{};
    ProcessEvent(func, &params);
}
void ABP_spiderweb_C::OnFireExtinguished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.OnFireExtinguished"));
    struct Params_OnFireExtinguished {
    }; // Size: 0x0
    Params_OnFireExtinguished params{};
    ProcessEvent(func, &params);
}
void ABP_spiderweb_C::ExecuteUbergraph_BP_SpiderWeb(int32_t EntryPoint, int32_t Temp_int_Variable, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, int32_t CallFunc_Add_IntInt_ReturnValue) {}
void ABP_spiderweb_C::WebDestroyed__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_SpiderWeb.BP_spiderweb_C.WebDestroyed__DelegateSignature"));
    struct Params_WebDestroyed__DelegateSignature {
    }; // Size: 0x0
    Params_WebDestroyed__DelegateSignature params{};
    ProcessEvent(func, &params);
}
