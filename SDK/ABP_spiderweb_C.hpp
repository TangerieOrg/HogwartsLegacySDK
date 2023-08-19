#pragma once
#include <cstdint>
#include "ASpiderWeb_Interactive.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FLinearColor.hpp"
#include "FMeshList.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FVector.hpp"
class UInteractiveObjectComponent;
class UBillboardComponent;
class UOdcObstacleComponent;
class UMaterialInstanceDynamic;
class UAkComponent;
class UStaticMeshComponent;
class ABP_CaveInEvent_C;
class AActor;
class UOdcAuthoredObstacleSetupComponent;
class UPrimitiveComponent;
class UMaterialInterface;
struct FHitResult;
class UIncendioComponent;
#pragma pack(push, 1)
class ABP_spiderweb_C : public ASpiderWeb_Interactive {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x470
    UInteractiveObjectComponent* InteractiveObject; // 0x478
    UOdcObstacleComponent* OdcObstacle; // 0x480
    UStaticMeshComponent* NavObstacle; // 0x488
    UAkComponent* Ak_BP_SpiderWeb_Burning_Loop; // 0x490
    UBillboardComponent* Billboard; // 0x498
    UStaticMeshComponent* StaticMesh; // 0x4a0
    char pad_4a8[0x30];
    TArray<ABP_CaveInEvent_C*> CaveInEvents; // 0x4d8
    TArray<AActor*> TargetSwitches; // 0x4e8
    int32_t PropIndex; // 0x4f8
    char pad_4fc[0x54];
    bool CompiledList; // 0x550
    char pad_551[0x7];
    FMeshList Props; // 0x558
    UMaterialInstanceDynamic* Material; // 0x568
    bool OverrideOpacity; // 0x570
    char pad_571[0x3];
    float OpacityMultiplier; // 0x574
    FLinearColor DiffuseColorTint; // 0x578
    float TextureTilingMultiplier; // 0x588
    char pad_58c[0x4];
    TArray<UMaterialInstanceDynamic*> Materials; // 0x590
    bool IsNavObstacle; // 0x5a0
    char pad_5a1[0x3];
    FRandomStream Random_Seed; // 0x5a4
    char pad_5ac[0x4];
    UOdcAuthoredObstacleSetupComponent* Odc_Obstacle; // 0x5b0
    static ABP_spiderweb_C* StaticClass();
    FName GetMainBone();
    UPrimitiveComponent* GetMainPrimitive();
    bool StartFreeze(AActor* Instigator, float Amount);
    bool DecreaseFire(float decreaseAmount);
    bool IncreaseFire(float increaseAmount, FVector Location);
    bool IsPointOnFire(FVector Point, bool& OnFire);
    bool StartFire(float Amount, FVector Location);
    void SetupWeb(UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32_t CallFunc_SelectMesh_NewPropIndex);
    void UserConstructionScript(bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_GetCollisionScale_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, int32_t Temp_int_Array_Index_Variable, UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UMaterialInterface* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue);
    void OnReset();
    void SetupSfx(UAkComponent* AkComponent);
    void OnAttemptToFreeze();
    void OnFailedToFreeze();
    void OnAttemptToSetOnFire(FVector Location);
    void OnFailedToLight();
    void ReceiveBeginPlay();
    void WebFreezing();
    void OnThaw(AActor* Instigator);
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnCompletelyCharred();
    void OnCaughtFire(UIncendioComponent* IncendioComponent);
    void OnFireExtinguished();
    void ExecuteUbergraph_BP_SpiderWeb(int32_t EntryPoint, int32_t Temp_int_Variable, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, int32_t CallFunc_Add_IntInt_ReturnValue);
    void WebDestroyed__DelegateSignature();
    void WebFrozen__DelegateSignature();
    void WebOnFire__DelegateSignature(FVector Location);
}; // Size: 0x5b8
#pragma pack(pop)
