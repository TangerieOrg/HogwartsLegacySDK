#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEnvironment\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPropList.hpp"
#include "FRandomStream.hpp"
#include "FVector.hpp"
class UStaticMeshComponent;
class UObjectStateComponent;
#pragma pack(push, 1)
class ABP_M_Rock_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UStaticMeshComponent* Rock; // 0x250
    UObjectStateComponent* ObjectState; // 0x258
    EEnvironment::Type Environment; // 0x260
    char pad_261[0x3];
    int32_t PropIndex; // 0x264
    char pad_268[0x50];
    int32_t EnvInt; // 0x2b8
    FRandomStream Random_Seed; // 0x2bc
    char pad_2c4[0x4];
    static ABP_M_Rock_C* StaticClass();
    void UserConstructionScript0(FPropList Props, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, int32_t CallFunc_PropSort_NewPropIndex, EEnvironment::Type CallFunc_PropSort_EnnvironmentOutput, int32_t CallFunc_PropSort_NewEnvInt);
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_M_Rock(int32_t EntryPoint);
}; // Size: 0x2c8
#pragma pack(pop)
