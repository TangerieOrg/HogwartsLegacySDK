#pragma once
#include <cstdint>
#include "ASelfArrangingBooks.hpp"
#include "E_SelfArrangingObjects\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FSTR_SelfArrangingObjects.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class USceneComponent;
class UStaticMesh;
class USplineComponent;
class UStaticMeshComponent;
#pragma pack(push, 1)
class ABP_SelfArrangingBooks_C : public ASelfArrangingBooks {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    USceneComponent* DefaultSceneRoot; // 0x2c8
    float AccumulatedTime; // 0x2d0
    float RandomTimer; // 0x2d4
    bool Reverse; // 0x2d8
    char pad_2d9[0x3];
    int32_t NumberOfPaths_0; // 0x2dc
    TArray<UStaticMesh*> ArrayOfBooks; // 0x2e0
    float MinTimerDelay; // 0x2f0
    float MaxTimerDelay; // 0x2f4
    float PlayRate; // 0x2f8
    bool OverwrittenSplines; // 0x2fc
    char pad_2fd[0x3];
    TArray<FSTR_SelfArrangingObjects> RearrangingObjects; // 0x300
    E_SelfArrangingObjects::Type SelectionOfObjectType; // 0x310
    char pad_311[0x3];
    int32_t SelectedType; // 0x314
    bool InArea; // 0x318
    char pad_319[0x3];
    float DistanceLoadInArea; // 0x31c
    FRandomStream RandomStream; // 0x320
    static ABP_SelfArrangingBooks_C* StaticClass();
    void UserConstructionScript(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, E_SelfArrangingObjects::Type Temp_byte_Variable, FTransform Temp_struct_Variable, int32_t Temp_int_Variable, USplineComponent* CallFunc_AddComponent_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, int32_t K2Node_Select_Default, int32_t Temp_int_Loop_Counter_Variable_1, FVector CallFunc_Conv_FloatToVector_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, UStaticMesh* CallFunc_Array_RandomFromStream_OutItem, int32_t CallFunc_Array_RandomFromStream_OutIndex, FVector CallFunc_Multiply_VectorInt_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue);
    void ReceiveBeginPlay();
    void MoveBooks();
    void ExecuteUbergraph_BP_SelfArrangingBooks(int32_t EntryPoint, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1);
}; // Size: 0x328
#pragma pack(pop)
