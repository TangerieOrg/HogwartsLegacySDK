#include "ABP_SelfArrangingBooks_C.hpp"
#include "ASelfArrangingBooks.hpp"
#include "E_SelfArrangingObjects\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FSTR_SelfArrangingObjects.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USplineComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
ABP_SelfArrangingBooks_C* ABP_SelfArrangingBooks_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Blueprints/BP_SelfArrangingBooks.BP_SelfArrangingBooks_C");
    return (ABP_SelfArrangingBooks_C*)res;
}
void ABP_SelfArrangingBooks_C::UserConstructionScript(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, E_SelfArrangingObjects::Type Temp_byte_Variable, FTransform Temp_struct_Variable, int32_t Temp_int_Variable, USplineComponent* CallFunc_AddComponent_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, int32_t K2Node_Select_Default, int32_t Temp_int_Loop_Counter_Variable_1, FVector CallFunc_Conv_FloatToVector_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, UStaticMesh* CallFunc_Array_RandomFromStream_OutItem, int32_t CallFunc_Array_RandomFromStream_OutIndex, FVector CallFunc_Multiply_VectorInt_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_SelfArrangingBooks.BP_SelfArrangingBooks_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        int32_t Temp_int_Array_Index_Variable_1; // 0xc
        E_SelfArrangingObjects::Type Temp_byte_Variable; // 0x10
        char pad_11[0xf];
        FTransform Temp_struct_Variable; // 0x20
        int32_t Temp_int_Variable; // 0x50
        char pad_54[0x4];
        USplineComponent* CallFunc_AddComponent_ReturnValue; // 0x58
        int32_t CallFunc_Array_Length_ReturnValue; // 0x60
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x64
        bool CallFunc_Less_IntInt_ReturnValue; // 0x68
        char pad_69[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x6c
        FRandomStream CallFunc_MakeRandomStream_RandomStream; // 0x78
        int32_t K2Node_Select_Default; // 0x80
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x84
        FVector CallFunc_Conv_FloatToVector_ReturnValue; // 0x88
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x94
        char pad_95[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x98
        FVector CallFunc_MakeVector_ReturnValue; // 0x9c
        UStaticMesh* CallFunc_Array_RandomFromStream_OutItem; // 0xa8
        int32_t CallFunc_Array_RandomFromStream_OutIndex; // 0xb0
        FVector CallFunc_Multiply_VectorInt_ReturnValue; // 0xb4
        FTransform CallFunc_MakeTransform_ReturnValue; // 0xc0
        UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1; // 0xf0
        bool CallFunc_SetStaticMesh_ReturnValue; // 0xf8
    }; // Size: 0xf9
    Params_UserConstructionScript params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_byte_Variable = (E_SelfArrangingObjects::Type)Temp_byte_Variable;
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_AddComponent_ReturnValue = (USplineComponent*)CallFunc_AddComponent_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_MakeRandomStream_RandomStream = (FRandomStream)CallFunc_MakeRandomStream_RandomStream;
    params.K2Node_Select_Default = (int32_t)K2Node_Select_Default;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Conv_FloatToVector_ReturnValue = (FVector)CallFunc_Conv_FloatToVector_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_Array_RandomFromStream_OutItem = (UStaticMesh*)CallFunc_Array_RandomFromStream_OutItem;
    params.CallFunc_Array_RandomFromStream_OutIndex = (int32_t)CallFunc_Array_RandomFromStream_OutIndex;
    params.CallFunc_Multiply_VectorInt_ReturnValue = (FVector)CallFunc_Multiply_VectorInt_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_AddComponent_ReturnValue_1 = (UStaticMeshComponent*)CallFunc_AddComponent_ReturnValue_1;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_SelfArrangingBooks_C::MoveBooks() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_SelfArrangingBooks.BP_SelfArrangingBooks_C.MoveBooks"));
    struct Params_MoveBooks {
    }; // Size: 0x0
    Params_MoveBooks params{};
    ProcessEvent(func, &params);
}
void ABP_SelfArrangingBooks_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Blueprints/BP_SelfArrangingBooks.BP_SelfArrangingBooks_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_SelfArrangingBooks_C::ExecuteUbergraph_BP_SelfArrangingBooks(int32_t EntryPoint, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1) {}
