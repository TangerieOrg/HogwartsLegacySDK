#pragma once
#include <cstdint>
#include "EPhysicalSurface.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTService_AvaAITree_Input.hpp"
class UClass;
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#pragma pack(push, 1)
class UBTS_Biped_Slide_C : public UBTService_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xf8
    float FrictionOverride; // 0x100
    FVector LastDirection; // 0x104
    EPhysicalSurface CurrentSurfaceType; // 0x110
    char pad_111[0x7];
    static UBTS_Biped_Slide_C* StaticClass();
    void OnLoaded_064020B847E32A364958D9B53D4D396C(UClass* Loaded);
    void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ServiceBegin(AActor* OwnerActor);
    void ServiceEnd(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit);
    void ExecuteUbergraph_BTS_Biped_Slide(int32_t EntryPoint);
}; // Size: 0x118
#pragma pack(pop)
