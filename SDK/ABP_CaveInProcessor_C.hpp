#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_CaveInElement.hpp"
#include "FSTR_CaveInParticleElement.hpp"
#include "FSTR_CaveIn_AnimMeshElement.hpp"
#include "FTransform.hpp"
class USceneComponent;
class UStaticMeshComponent;
class ABP_CaveInElement_C;
#pragma pack(push, 1)
class ABP_CaveInProcessor_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USceneComponent* DefaultSceneRoot; // 0x250
    FSTR_CaveInElement Element; // 0x258
    UStaticMeshComponent* CurrentMesh; // 0x280
    TArray<UStaticMeshComponent*> PhysicsMeshes; // 0x288
    static ABP_CaveInProcessor_C* StaticClass();
    void ProcessElement(FSTR_CaveInElement InputElement);
    void ExecuteUbergraph_BP_CaveInProcessor(int32_t EntryPoint, FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, ABP_CaveInElement_C* CallFunc_FinishSpawningActor_ReturnValue, ABP_CaveInElement_C* CallFunc_FinishSpawningActor_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, FSTR_CaveInElement K2Node_CustomEvent_InputElement, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, FSTR_CaveIn_AnimMeshElement CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FSTR_CaveInParticleElement CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
}; // Size: 0x298
#pragma pack(pop)
