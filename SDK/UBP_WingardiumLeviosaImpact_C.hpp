#pragma once
#include <cstdint>
#include "EEndPlayReason\Type.hpp"
#include "ETraceTypeQuery.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "USpellImpactComponent.hpp"
class UPrimitiveComponent;
class ABP_Shell_Levioso_C;
class UParticleSystemComponent;
class AActor;
#pragma pack(push, 1)
class UBP_WingardiumLeviosaImpact_C : public USpellImpactComponent {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    UPrimitiveComponent* PrimitiveComponent; // 0xd0
    ABP_Shell_Levioso_C* ShellActor; // 0xd8
    UParticleSystemComponent* ParticleSystem; // 0xe0
    TArray<AActor*> ActorArray; // 0xe8
    ETraceTypeQuery NewVar_0; // 0xf8
    char pad_f9[0x7];
    static UBP_WingardiumLeviosaImpact_C* StaticClass();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_WingardiumLeviosaImpact(int32_t EntryPoint, AActor* CallFunc_GetOwner_ReturnValue, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}; // Size: 0x100
#pragma pack(pop)
