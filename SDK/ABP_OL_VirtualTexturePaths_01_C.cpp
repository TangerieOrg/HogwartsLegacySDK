#include "AActor.hpp"
#include "ABP_OL_Coast_VirtualTexturePaths_01_C.hpp"
#include "ABP_OL_VirtualTexturePaths_01_C.hpp"
#include "AInstancedFoliageActor.hpp"
#include "AStaticMeshActor.hpp"
#include "EObjectTypeQuery.hpp"
#include "FHitResult.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
#include "URuntimeVirtualTexture.hpp"
#include "USceneComponent.hpp"
#include "USplineComponent.hpp"
#include "USplineMeshComponent.hpp"
#include "UStaticMesh.hpp"
#include "UTexture.hpp"
ABP_OL_VirtualTexturePaths_01_C* ABP_OL_VirtualTexturePaths_01_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Overland_Common/Objects/Coast/Blueprints/BP_OL_VirtualTexturePaths_01.BP_OL_VirtualTexturePaths_01_C");
    return (ABP_OL_VirtualTexturePaths_01_C*)res;
}
void ABP_OL_VirtualTexturePaths_01_C::Clear_Array() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/Objects/Coast/Blueprints/BP_OL_VirtualTexturePaths_01.BP_OL_VirtualTexturePaths_01_C.Clear_Array"));
    struct Params_Clear_Array {
    }; // Size: 0x0
    Params_Clear_Array params{};
    ProcessEvent(func, &params);
}
void ABP_OL_VirtualTexturePaths_01_C::Snap_To_Landscape(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Clamp_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_4, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Array_Index_Variable_3, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_5, int32_t Temp_int_Array_Index_Variable_4, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_6, int32_t Temp_int_Loop_Counter_Variable_4, TArray<ABP_OL_VirtualTexturePaths_01_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32_t CallFunc_Add_IntInt_ReturnValue_7, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<ABP_OL_Coast_VirtualTexturePaths_01_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, int32_t Temp_int_Loop_Counter_Variable_5, ABP_OL_Coast_VirtualTexturePaths_01_C* CallFunc_Array_Get_Item, TArray<AActor*>& CallFunc_GetAllChildActors_ChildActors, int32_t CallFunc_Add_IntInt_ReturnValue_8, AActor* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable_5, ABP_OL_VirtualTexturePaths_01_C* CallFunc_Array_Get_Item_2, TArray<AActor*>& CallFunc_GetAllChildActors_ChildActors_1, AActor* CallFunc_Array_Get_Item_3, int32_t CallFunc_Array_Length_ReturnValue_3, int32_t CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, FVector CallFunc_GetTangentAtSplinePoint_ReturnValue, FVector CallFunc_GetLocationAtSplinePoint_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_GetLocationAtSplinePoint_ReturnValue_1, FVector CallFunc_GetLocationAtSplinePoint_ReturnValue_2, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue, TArray<AInstancedFoliageActor*>& CallFunc_GetAllActorsOfClass_OutActors_2, TArray<AStaticMeshActor*>& CallFunc_GetAllActorsOfClass_OutActors_3, AStaticMeshActor* CallFunc_Array_Get_Item_4, int32_t CallFunc_Array_Length_ReturnValue_4, int32_t CallFunc_Array_Add_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, FVector CallFunc_GetLocationAtSplinePoint_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, FVector CallFunc_MakeVector_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_3, TArray<FHitResult>& CallFunc_LineTraceMulti_OutHits, bool CallFunc_LineTraceMulti_ReturnValue, int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue, FHitResult CallFunc_Array_Get_Item_5, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, float CallFunc_Add_FloatFloat_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_4, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/Objects/Coast/Blueprints/BP_OL_VirtualTexturePaths_01.BP_OL_VirtualTexturePaths_01_C.Snap_To_Landscape"));
    struct Params_Snap_To_Landscape {
        int32_t Temp_int_Loop_Counter_Variable; // 0x0
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x4
        int32_t Temp_int_Array_Index_Variable; // 0x8
        int32_t Temp_int_Array_Index_Variable_1; // 0xc
        int32_t Temp_int_Variable; // 0x10
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x14
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x18
        int32_t CallFunc_Clamp_ReturnValue; // 0x1c
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x20
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x24
        int32_t CallFunc_Add_IntInt_ReturnValue_3; // 0x28
        int32_t Temp_int_Loop_Counter_Variable_2; // 0x2c
        int32_t CallFunc_Add_IntInt_ReturnValue_4; // 0x30
        int32_t Temp_int_Array_Index_Variable_2; // 0x34
        int32_t Temp_int_Array_Index_Variable_3; // 0x38
        int32_t Temp_int_Loop_Counter_Variable_3; // 0x3c
        int32_t CallFunc_Add_IntInt_ReturnValue_5; // 0x40
        int32_t Temp_int_Array_Index_Variable_4; // 0x44
        int32_t Temp_int_Variable_1; // 0x48
        int32_t CallFunc_Add_IntInt_ReturnValue_6; // 0x4c
        int32_t Temp_int_Loop_Counter_Variable_4; // 0x50
        char pad_54[0x4];
        TArray<ABP_OL_VirtualTexturePaths_01_C*> CallFunc_GetAllActorsOfClass_OutActors; // 0x58
        int32_t CallFunc_Add_IntInt_ReturnValue_7; // 0x68
        int32_t CallFunc_Array_Length_ReturnValue; // 0x6c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x70
        char pad_71[0x7];
        TArray<ABP_OL_Coast_VirtualTexturePaths_01_C*> CallFunc_GetAllActorsOfClass_OutActors_1; // 0x78
        int32_t Temp_int_Loop_Counter_Variable_5; // 0x88
        char pad_8c[0x4];
        ABP_OL_Coast_VirtualTexturePaths_01_C* CallFunc_Array_Get_Item; // 0x90
        TArray<AActor*> CallFunc_GetAllChildActors_ChildActors; // 0x98
        int32_t CallFunc_Add_IntInt_ReturnValue_8; // 0xa8
        char pad_ac[0x4];
        AActor* CallFunc_Array_Get_Item_1; // 0xb0
        int32_t CallFunc_Array_Add_ReturnValue; // 0xb8
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0xbc
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1; // 0xbd
        char pad_be[0x2];
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0xc0
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0xc4
        char pad_c5[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0xc8
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0xcc
        char pad_cd[0x3];
        int32_t Temp_int_Array_Index_Variable_5; // 0xd0
        char pad_d4[0x4];
        ABP_OL_VirtualTexturePaths_01_C* CallFunc_Array_Get_Item_2; // 0xd8
        TArray<AActor*> CallFunc_GetAllChildActors_ChildActors_1; // 0xe0
        AActor* CallFunc_Array_Get_Item_3; // 0xf0
        int32_t CallFunc_Array_Length_ReturnValue_3; // 0xf8
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0xfc
        bool CallFunc_Less_IntInt_ReturnValue_3; // 0x100
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2; // 0x101
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3; // 0x102
        char pad_103[0x1];
        FVector CallFunc_GetTangentAtSplinePoint_ReturnValue; // 0x104
        FVector CallFunc_GetLocationAtSplinePoint_ReturnValue; // 0x110
        float CallFunc_BreakVector_X; // 0x11c
        float CallFunc_BreakVector_Y; // 0x120
        float CallFunc_BreakVector_Z; // 0x124
        FVector CallFunc_GetLocationAtSplinePoint_ReturnValue_1; // 0x128
        FVector CallFunc_GetLocationAtSplinePoint_ReturnValue_2; // 0x134
        FVector CallFunc_Subtract_VectorVector_ReturnValue; // 0x140
        FVector CallFunc_Subtract_VectorVector_ReturnValue_1; // 0x14c
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x158
        FVector CallFunc_Divide_VectorFloat_ReturnValue; // 0x164
        float CallFunc_BreakVector_X_1; // 0x170
        float CallFunc_BreakVector_Y_1; // 0x174
        float CallFunc_BreakVector_Z_1; // 0x178
        FVector CallFunc_MakeVector_ReturnValue; // 0x17c
        TArray<AInstancedFoliageActor*> CallFunc_GetAllActorsOfClass_OutActors_2; // 0x188
        TArray<AStaticMeshActor*> CallFunc_GetAllActorsOfClass_OutActors_3; // 0x198
        AStaticMeshActor* CallFunc_Array_Get_Item_4; // 0x1a8
        int32_t CallFunc_Array_Length_ReturnValue_4; // 0x1b0
        int32_t CallFunc_Array_Add_ReturnValue_2; // 0x1b4
        bool CallFunc_Less_IntInt_ReturnValue_4; // 0x1b8
        char pad_1b9[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x1bc
        float CallFunc_BreakVector_X_2; // 0x1c8
        float CallFunc_BreakVector_Y_2; // 0x1cc
        float CallFunc_BreakVector_Z_2; // 0x1d0
        FVector CallFunc_GetLocationAtSplinePoint_ReturnValue_3; // 0x1d4
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x1e0
        float CallFunc_BreakVector_X_3; // 0x1e4
        float CallFunc_BreakVector_Y_3; // 0x1e8
        float CallFunc_BreakVector_Z_3; // 0x1ec
        FVector CallFunc_MakeVector_ReturnValue_1; // 0x1f0
        float CallFunc_Add_FloatFloat_ReturnValue_1; // 0x1fc
        float CallFunc_Add_FloatFloat_ReturnValue_2; // 0x200
        FVector CallFunc_MakeVector_ReturnValue_2; // 0x204
        FVector CallFunc_MakeVector_ReturnValue_3; // 0x210
        char pad_21c[0x4];
        TArray<FHitResult> CallFunc_LineTraceMulti_OutHits; // 0x220
        bool CallFunc_LineTraceMulti_ReturnValue; // 0x230
        char pad_231[0x3];
        int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue; // 0x234
        FHitResult CallFunc_Array_Get_Item_5; // 0x238
        int32_t CallFunc_Subtract_IntInt_ReturnValue_1; // 0x2c0
        bool CallFunc_BreakHitResult_bBlockingHit; // 0x2c4
        bool CallFunc_BreakHitResult_bInitialOverlap; // 0x2c5
        char pad_2c6[0x2];
        float CallFunc_BreakHitResult_Time; // 0x2c8
        float CallFunc_BreakHitResult_Distance; // 0x2cc
        FVector CallFunc_BreakHitResult_Location; // 0x2d0
        FVector CallFunc_BreakHitResult_ImpactPoint; // 0x2dc
        FVector CallFunc_BreakHitResult_Normal; // 0x2e8
        FVector CallFunc_BreakHitResult_ImpactNormal; // 0x2f4
        UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat; // 0x300
        AActor* CallFunc_BreakHitResult_HitActor; // 0x308
        UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent; // 0x310
        FName CallFunc_BreakHitResult_HitBoneName; // 0x318
        int32_t CallFunc_BreakHitResult_HitItem; // 0x320
        int32_t CallFunc_BreakHitResult_ElementIndex; // 0x324
        int32_t CallFunc_BreakHitResult_FaceIndex; // 0x328
        FVector CallFunc_BreakHitResult_TraceStart; // 0x32c
        FVector CallFunc_BreakHitResult_TraceEnd; // 0x338
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x344
        char pad_345[0x3];
        float CallFunc_BreakVector_X_4; // 0x348
        float CallFunc_BreakVector_Y_4; // 0x34c
        float CallFunc_BreakVector_Z_4; // 0x350
        float CallFunc_Add_FloatFloat_ReturnValue_3; // 0x354
        bool CallFunc_LessEqual_IntInt_ReturnValue_1; // 0x358
        char pad_359[0x3];
        FVector CallFunc_MakeVector_ReturnValue_4; // 0x35c
        FHitResult CallFunc_K2_SetActorLocation_SweepHitResult; // 0x368
        bool CallFunc_K2_SetActorLocation_ReturnValue; // 0x3f0
        char pad_3f1[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_5; // 0x3f4
        bool CallFunc_Less_IntInt_ReturnValue_5; // 0x3f8
    }; // Size: 0x3f9
    Params_Snap_To_Landscape params{};
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_Clamp_ReturnValue = (int32_t)CallFunc_Clamp_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_3 = (int32_t)CallFunc_Add_IntInt_ReturnValue_3;
    params.Temp_int_Loop_Counter_Variable_2 = (int32_t)Temp_int_Loop_Counter_Variable_2;
    params.CallFunc_Add_IntInt_ReturnValue_4 = (int32_t)CallFunc_Add_IntInt_ReturnValue_4;
    params.Temp_int_Array_Index_Variable_2 = (int32_t)Temp_int_Array_Index_Variable_2;
    params.Temp_int_Array_Index_Variable_3 = (int32_t)Temp_int_Array_Index_Variable_3;
    params.Temp_int_Loop_Counter_Variable_3 = (int32_t)Temp_int_Loop_Counter_Variable_3;
    params.CallFunc_Add_IntInt_ReturnValue_5 = (int32_t)CallFunc_Add_IntInt_ReturnValue_5;
    params.Temp_int_Array_Index_Variable_4 = (int32_t)Temp_int_Array_Index_Variable_4;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_6 = (int32_t)CallFunc_Add_IntInt_ReturnValue_6;
    params.Temp_int_Loop_Counter_Variable_4 = (int32_t)Temp_int_Loop_Counter_Variable_4;
    params.CallFunc_GetAllActorsOfClass_OutActors = (TArray<ABP_OL_VirtualTexturePaths_01_C*>)CallFunc_GetAllActorsOfClass_OutActors;
    params.CallFunc_Add_IntInt_ReturnValue_7 = (int32_t)CallFunc_Add_IntInt_ReturnValue_7;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_GetAllActorsOfClass_OutActors_1 = (TArray<ABP_OL_Coast_VirtualTexturePaths_01_C*>)CallFunc_GetAllActorsOfClass_OutActors_1;
    params.Temp_int_Loop_Counter_Variable_5 = (int32_t)Temp_int_Loop_Counter_Variable_5;
    params.CallFunc_Array_Get_Item = (ABP_OL_Coast_VirtualTexturePaths_01_C*)CallFunc_Array_Get_Item;
    params.CallFunc_GetAllChildActors_ChildActors = (TArray<AActor*>)CallFunc_GetAllChildActors_ChildActors;
    params.CallFunc_Add_IntInt_ReturnValue_8 = (int32_t)CallFunc_Add_IntInt_ReturnValue_8;
    params.CallFunc_Array_Get_Item_1 = (AActor*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.Temp_int_Array_Index_Variable_5 = (int32_t)Temp_int_Array_Index_Variable_5;
    params.CallFunc_Array_Get_Item_2 = (ABP_OL_VirtualTexturePaths_01_C*)CallFunc_Array_Get_Item_2;
    params.CallFunc_GetAllChildActors_ChildActors_1 = (TArray<AActor*>)CallFunc_GetAllChildActors_ChildActors_1;
    params.CallFunc_Array_Get_Item_3 = (AActor*)CallFunc_Array_Get_Item_3;
    params.CallFunc_Array_Length_ReturnValue_3 = (int32_t)CallFunc_Array_Length_ReturnValue_3;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_3 = (bool)CallFunc_Less_IntInt_ReturnValue_3;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_3 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_3;
    params.CallFunc_GetTangentAtSplinePoint_ReturnValue = (FVector)CallFunc_GetTangentAtSplinePoint_ReturnValue;
    params.CallFunc_GetLocationAtSplinePoint_ReturnValue = (FVector)CallFunc_GetLocationAtSplinePoint_ReturnValue;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_GetLocationAtSplinePoint_ReturnValue_1 = (FVector)CallFunc_GetLocationAtSplinePoint_ReturnValue_1;
    params.CallFunc_GetLocationAtSplinePoint_ReturnValue_2 = (FVector)CallFunc_GetLocationAtSplinePoint_ReturnValue_2;
    params.CallFunc_Subtract_VectorVector_ReturnValue = (FVector)CallFunc_Subtract_VectorVector_ReturnValue;
    params.CallFunc_Subtract_VectorVector_ReturnValue_1 = (FVector)CallFunc_Subtract_VectorVector_ReturnValue_1;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_Divide_VectorFloat_ReturnValue = (FVector)CallFunc_Divide_VectorFloat_ReturnValue;
    params.CallFunc_BreakVector_X_1 = (float)CallFunc_BreakVector_X_1;
    params.CallFunc_BreakVector_Y_1 = (float)CallFunc_BreakVector_Y_1;
    params.CallFunc_BreakVector_Z_1 = (float)CallFunc_BreakVector_Z_1;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_GetAllActorsOfClass_OutActors_2 = (TArray<AInstancedFoliageActor*>)CallFunc_GetAllActorsOfClass_OutActors_2;
    params.CallFunc_GetAllActorsOfClass_OutActors_3 = (TArray<AStaticMeshActor*>)CallFunc_GetAllActorsOfClass_OutActors_3;
    params.CallFunc_Array_Get_Item_4 = (AStaticMeshActor*)CallFunc_Array_Get_Item_4;
    params.CallFunc_Array_Length_ReturnValue_4 = (int32_t)CallFunc_Array_Length_ReturnValue_4;
    params.CallFunc_Array_Add_ReturnValue_2 = (int32_t)CallFunc_Array_Add_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue_4 = (bool)CallFunc_Less_IntInt_ReturnValue_4;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_BreakVector_X_2 = (float)CallFunc_BreakVector_X_2;
    params.CallFunc_BreakVector_Y_2 = (float)CallFunc_BreakVector_Y_2;
    params.CallFunc_BreakVector_Z_2 = (float)CallFunc_BreakVector_Z_2;
    params.CallFunc_GetLocationAtSplinePoint_ReturnValue_3 = (FVector)CallFunc_GetLocationAtSplinePoint_ReturnValue_3;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_BreakVector_X_3 = (float)CallFunc_BreakVector_X_3;
    params.CallFunc_BreakVector_Y_3 = (float)CallFunc_BreakVector_Y_3;
    params.CallFunc_BreakVector_Z_3 = (float)CallFunc_BreakVector_Z_3;
    params.CallFunc_MakeVector_ReturnValue_1 = (FVector)CallFunc_MakeVector_ReturnValue_1;
    params.CallFunc_Add_FloatFloat_ReturnValue_1 = (float)CallFunc_Add_FloatFloat_ReturnValue_1;
    params.CallFunc_Add_FloatFloat_ReturnValue_2 = (float)CallFunc_Add_FloatFloat_ReturnValue_2;
    params.CallFunc_MakeVector_ReturnValue_2 = (FVector)CallFunc_MakeVector_ReturnValue_2;
    params.CallFunc_MakeVector_ReturnValue_3 = (FVector)CallFunc_MakeVector_ReturnValue_3;
    params.CallFunc_LineTraceMulti_OutHits = (TArray<FHitResult>)CallFunc_LineTraceMulti_OutHits;
    params.CallFunc_LineTraceMulti_ReturnValue = (bool)CallFunc_LineTraceMulti_ReturnValue;
    params.CallFunc_GetNumberOfSplinePoints_ReturnValue = (int32_t)CallFunc_GetNumberOfSplinePoints_ReturnValue;
    params.CallFunc_Array_Get_Item_5 = (FHitResult)CallFunc_Array_Get_Item_5;
    params.CallFunc_Subtract_IntInt_ReturnValue_1 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_1;
    params.CallFunc_BreakHitResult_bBlockingHit = (bool)CallFunc_BreakHitResult_bBlockingHit;
    params.CallFunc_BreakHitResult_bInitialOverlap = (bool)CallFunc_BreakHitResult_bInitialOverlap;
    params.CallFunc_BreakHitResult_Time = (float)CallFunc_BreakHitResult_Time;
    params.CallFunc_BreakHitResult_Distance = (float)CallFunc_BreakHitResult_Distance;
    params.CallFunc_BreakHitResult_Location = (FVector)CallFunc_BreakHitResult_Location;
    params.CallFunc_BreakHitResult_ImpactPoint = (FVector)CallFunc_BreakHitResult_ImpactPoint;
    params.CallFunc_BreakHitResult_Normal = (FVector)CallFunc_BreakHitResult_Normal;
    params.CallFunc_BreakHitResult_ImpactNormal = (FVector)CallFunc_BreakHitResult_ImpactNormal;
    params.CallFunc_BreakHitResult_PhysMat = (UPhysicalMaterial*)CallFunc_BreakHitResult_PhysMat;
    params.CallFunc_BreakHitResult_HitActor = (AActor*)CallFunc_BreakHitResult_HitActor;
    params.CallFunc_BreakHitResult_HitComponent = (UPrimitiveComponent*)CallFunc_BreakHitResult_HitComponent;
    params.CallFunc_BreakHitResult_HitBoneName = (FName)CallFunc_BreakHitResult_HitBoneName;
    params.CallFunc_BreakHitResult_HitItem = (int32_t)CallFunc_BreakHitResult_HitItem;
    params.CallFunc_BreakHitResult_ElementIndex = (int32_t)CallFunc_BreakHitResult_ElementIndex;
    params.CallFunc_BreakHitResult_FaceIndex = (int32_t)CallFunc_BreakHitResult_FaceIndex;
    params.CallFunc_BreakHitResult_TraceStart = (FVector)CallFunc_BreakHitResult_TraceStart;
    params.CallFunc_BreakHitResult_TraceEnd = (FVector)CallFunc_BreakHitResult_TraceEnd;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_BreakVector_X_4 = (float)CallFunc_BreakVector_X_4;
    params.CallFunc_BreakVector_Y_4 = (float)CallFunc_BreakVector_Y_4;
    params.CallFunc_BreakVector_Z_4 = (float)CallFunc_BreakVector_Z_4;
    params.CallFunc_Add_FloatFloat_ReturnValue_3 = (float)CallFunc_Add_FloatFloat_ReturnValue_3;
    params.CallFunc_LessEqual_IntInt_ReturnValue_1 = (bool)CallFunc_LessEqual_IntInt_ReturnValue_1;
    params.CallFunc_MakeVector_ReturnValue_4 = (FVector)CallFunc_MakeVector_ReturnValue_4;
    params.CallFunc_K2_SetActorLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetActorLocation_SweepHitResult;
    params.CallFunc_K2_SetActorLocation_ReturnValue = (bool)CallFunc_K2_SetActorLocation_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_5 = (int32_t)CallFunc_Array_Length_ReturnValue_5;
    params.CallFunc_Less_IntInt_ReturnValue_5 = (bool)CallFunc_Less_IntInt_ReturnValue_5;
    ProcessEvent(func, &params);
    CallFunc_GetAllActorsOfClass_OutActors_3 = params.CallFunc_GetAllActorsOfClass_OutActors_3;
    CallFunc_GetAllActorsOfClass_OutActors = params.CallFunc_GetAllActorsOfClass_OutActors;
    CallFunc_GetAllActorsOfClass_OutActors_1 = params.CallFunc_GetAllActorsOfClass_OutActors_1;
    CallFunc_GetAllChildActors_ChildActors = params.CallFunc_GetAllChildActors_ChildActors;
    CallFunc_GetAllChildActors_ChildActors_1 = params.CallFunc_GetAllChildActors_ChildActors_1;
    CallFunc_GetAllActorsOfClass_OutActors_2 = params.CallFunc_GetAllActorsOfClass_OutActors_2;
    CallFunc_LineTraceMulti_OutHits = params.CallFunc_LineTraceMulti_OutHits;
}
void ABP_OL_VirtualTexturePaths_01_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/Objects/Coast/Blueprints/BP_OL_VirtualTexturePaths_01.BP_OL_VirtualTexturePaths_01_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_OL_VirtualTexturePaths_01_C::Trace_To_Landscape(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, TArray<FHitResult>& CallFunc_LineTraceMulti_OutHits, bool CallFunc_LineTraceMulti_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FHitResult CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, int32_t CallFunc_Array_Add_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Contains_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/Objects/Coast/Blueprints/BP_OL_VirtualTexturePaths_01.BP_OL_VirtualTexturePaths_01_C.Trace_To_Landscape"));
    struct Params_Trace_To_Landscape {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        float CallFunc_BreakVector_X; // 0xc
        float CallFunc_BreakVector_Y; // 0x10
        float CallFunc_BreakVector_Z; // 0x14
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x18
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x1c
        FVector CallFunc_MakeVector_ReturnValue; // 0x20
        FVector CallFunc_MakeVector_ReturnValue_1; // 0x2c
        TArray<FHitResult> CallFunc_LineTraceMulti_OutHits; // 0x38
        bool CallFunc_LineTraceMulti_ReturnValue; // 0x48
        char pad_49[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x4c
        FHitResult CallFunc_Array_Get_Item; // 0x50
        bool CallFunc_Less_IntInt_ReturnValue; // 0xd8
        bool CallFunc_BreakHitResult_bBlockingHit; // 0xd9
        bool CallFunc_BreakHitResult_bInitialOverlap; // 0xda
        char pad_db[0x1];
        float CallFunc_BreakHitResult_Time; // 0xdc
        float CallFunc_BreakHitResult_Distance; // 0xe0
        FVector CallFunc_BreakHitResult_Location; // 0xe4
        FVector CallFunc_BreakHitResult_ImpactPoint; // 0xf0
        FVector CallFunc_BreakHitResult_Normal; // 0xfc
        FVector CallFunc_BreakHitResult_ImpactNormal; // 0x108
        char pad_114[0x4];
        UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat; // 0x118
        AActor* CallFunc_BreakHitResult_HitActor; // 0x120
        UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent; // 0x128
        FName CallFunc_BreakHitResult_HitBoneName; // 0x130
        int32_t CallFunc_BreakHitResult_HitItem; // 0x138
        int32_t CallFunc_BreakHitResult_ElementIndex; // 0x13c
        int32_t CallFunc_BreakHitResult_FaceIndex; // 0x140
        FVector CallFunc_BreakHitResult_TraceStart; // 0x144
        FVector CallFunc_BreakHitResult_TraceEnd; // 0x150
        int32_t CallFunc_Array_Add_ReturnValue; // 0x15c
        FString CallFunc_GetDisplayName_ReturnValue; // 0x160
        bool CallFunc_Contains_ReturnValue; // 0x170
        char pad_171[0x3];
        float CallFunc_BreakVector_X_1; // 0x174
        float CallFunc_BreakVector_Y_1; // 0x178
        float CallFunc_BreakVector_Z_1; // 0x17c
        float CallFunc_Add_FloatFloat_ReturnValue_1; // 0x180
        FVector CallFunc_MakeVector_ReturnValue_2; // 0x184
    }; // Size: 0x190
    Params_Trace_To_Landscape params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue_1 = (FVector)CallFunc_MakeVector_ReturnValue_1;
    params.CallFunc_LineTraceMulti_OutHits = (TArray<FHitResult>)CallFunc_LineTraceMulti_OutHits;
    params.CallFunc_LineTraceMulti_ReturnValue = (bool)CallFunc_LineTraceMulti_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (FHitResult)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_BreakHitResult_bBlockingHit = (bool)CallFunc_BreakHitResult_bBlockingHit;
    params.CallFunc_BreakHitResult_bInitialOverlap = (bool)CallFunc_BreakHitResult_bInitialOverlap;
    params.CallFunc_BreakHitResult_Time = (float)CallFunc_BreakHitResult_Time;
    params.CallFunc_BreakHitResult_Distance = (float)CallFunc_BreakHitResult_Distance;
    params.CallFunc_BreakHitResult_Location = (FVector)CallFunc_BreakHitResult_Location;
    params.CallFunc_BreakHitResult_ImpactPoint = (FVector)CallFunc_BreakHitResult_ImpactPoint;
    params.CallFunc_BreakHitResult_Normal = (FVector)CallFunc_BreakHitResult_Normal;
    params.CallFunc_BreakHitResult_ImpactNormal = (FVector)CallFunc_BreakHitResult_ImpactNormal;
    params.CallFunc_BreakHitResult_PhysMat = (UPhysicalMaterial*)CallFunc_BreakHitResult_PhysMat;
    params.CallFunc_BreakHitResult_HitActor = (AActor*)CallFunc_BreakHitResult_HitActor;
    params.CallFunc_BreakHitResult_HitComponent = (UPrimitiveComponent*)CallFunc_BreakHitResult_HitComponent;
    params.CallFunc_BreakHitResult_HitBoneName = (FName)CallFunc_BreakHitResult_HitBoneName;
    params.CallFunc_BreakHitResult_HitItem = (int32_t)CallFunc_BreakHitResult_HitItem;
    params.CallFunc_BreakHitResult_ElementIndex = (int32_t)CallFunc_BreakHitResult_ElementIndex;
    params.CallFunc_BreakHitResult_FaceIndex = (int32_t)CallFunc_BreakHitResult_FaceIndex;
    params.CallFunc_BreakHitResult_TraceStart = (FVector)CallFunc_BreakHitResult_TraceStart;
    params.CallFunc_BreakHitResult_TraceEnd = (FVector)CallFunc_BreakHitResult_TraceEnd;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_GetDisplayName_ReturnValue = (FString)CallFunc_GetDisplayName_ReturnValue;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    params.CallFunc_BreakVector_X_1 = (float)CallFunc_BreakVector_X_1;
    params.CallFunc_BreakVector_Y_1 = (float)CallFunc_BreakVector_Y_1;
    params.CallFunc_BreakVector_Z_1 = (float)CallFunc_BreakVector_Z_1;
    params.CallFunc_Add_FloatFloat_ReturnValue_1 = (float)CallFunc_Add_FloatFloat_ReturnValue_1;
    params.CallFunc_MakeVector_ReturnValue_2 = (FVector)CallFunc_MakeVector_ReturnValue_2;
    ProcessEvent(func, &params);
    CallFunc_LineTraceMulti_OutHits = params.CallFunc_LineTraceMulti_OutHits;
}
void ABP_OL_VirtualTexturePaths_01_C::UserConstructionScript0(FTransform Temp_struct_Variable, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FLinearColor CallFunc_MakeColor_ReturnValue, FLinearColor CallFunc_MakeColor_ReturnValue_1, FLinearColor CallFunc_MakeColor_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_ClampVectorSize_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, float CallFunc_GetSplineLength_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_GetSplineLength_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, int32_t CallFunc_FCeil_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/Objects/Coast/Blueprints/BP_OL_VirtualTexturePaths_01.BP_OL_VirtualTexturePaths_01_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FTransform Temp_struct_Variable; // 0x0
        USplineMeshComponent* CallFunc_AddComponent_ReturnValue; // 0x30
        int32_t Temp_int_Variable; // 0x38
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x3c
        float CallFunc_Conv_IntToFloat_ReturnValue; // 0x40
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x44
        char pad_45[0x3];
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x48
        FLinearColor CallFunc_MakeColor_ReturnValue; // 0x4c
        FLinearColor CallFunc_MakeColor_ReturnValue_1; // 0x5c
        FLinearColor CallFunc_MakeColor_ReturnValue_2; // 0x6c
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x7c
        float CallFunc_Conv_IntToFloat_ReturnValue_1; // 0x80
        float CallFunc_Conv_IntToFloat_ReturnValue_2; // 0x84
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x88
        int32_t CallFunc_Array_Add_ReturnValue; // 0x8c
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x90
        char pad_91[0x3];
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x94
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x98
        FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue; // 0x9c
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0xa8
        FVector CallFunc_ClampVectorSize_ReturnValue; // 0xb4
        FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1; // 0xc0
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1; // 0xcc
        FVector CallFunc_ClampVectorSize_ReturnValue_1; // 0xd8
        int32_t CallFunc_Subtract_IntInt_ReturnValue_1; // 0xe4
        float CallFunc_Conv_IntToFloat_ReturnValue_3; // 0xe8
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0xec
        char pad_ed[0x3];
        int32_t CallFunc_Subtract_IntInt_ReturnValue_2; // 0xf0
        bool CallFunc_EqualEqual_IntInt_ReturnValue_1; // 0xf4
        char pad_f5[0x3];
        int32_t CallFunc_Subtract_IntInt_ReturnValue_3; // 0xf8
        bool CallFunc_EqualEqual_IntInt_ReturnValue_2; // 0xfc
        char pad_fd[0x3];
        float CallFunc_GetSplineLength_ReturnValue; // 0x100
        float CallFunc_Divide_FloatFloat_ReturnValue_1; // 0x104
        float CallFunc_GetSplineLength_ReturnValue_1; // 0x108
        float CallFunc_Divide_FloatFloat_ReturnValue_2; // 0x10c
        int32_t CallFunc_FCeil_ReturnValue; // 0x110
        int32_t CallFunc_FTrunc_ReturnValue; // 0x114
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0x118
    }; // Size: 0x119
    Params_UserConstructionScript params{};
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.CallFunc_AddComponent_ReturnValue = (USplineMeshComponent*)CallFunc_AddComponent_ReturnValue;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_Conv_IntToFloat_ReturnValue = (float)CallFunc_Conv_IntToFloat_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_MakeColor_ReturnValue = (FLinearColor)CallFunc_MakeColor_ReturnValue;
    params.CallFunc_MakeColor_ReturnValue_1 = (FLinearColor)CallFunc_MakeColor_ReturnValue_1;
    params.CallFunc_MakeColor_ReturnValue_2 = (FLinearColor)CallFunc_MakeColor_ReturnValue_2;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Conv_IntToFloat_ReturnValue_1 = (float)CallFunc_Conv_IntToFloat_ReturnValue_1;
    params.CallFunc_Conv_IntToFloat_ReturnValue_2 = (float)CallFunc_Conv_IntToFloat_ReturnValue_2;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_ClampVectorSize_ReturnValue = (FVector)CallFunc_ClampVectorSize_ReturnValue;
    params.CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1 = (FVector)CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1 = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1;
    params.CallFunc_ClampVectorSize_ReturnValue_1 = (FVector)CallFunc_ClampVectorSize_ReturnValue_1;
    params.CallFunc_Subtract_IntInt_ReturnValue_1 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_1;
    params.CallFunc_Conv_IntToFloat_ReturnValue_3 = (float)CallFunc_Conv_IntToFloat_ReturnValue_3;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue_2 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_2;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_1 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_1;
    params.CallFunc_Subtract_IntInt_ReturnValue_3 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_3;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_2 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_2;
    params.CallFunc_GetSplineLength_ReturnValue = (float)CallFunc_GetSplineLength_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue_1 = (float)CallFunc_Divide_FloatFloat_ReturnValue_1;
    params.CallFunc_GetSplineLength_ReturnValue_1 = (float)CallFunc_GetSplineLength_ReturnValue_1;
    params.CallFunc_Divide_FloatFloat_ReturnValue_2 = (float)CallFunc_Divide_FloatFloat_ReturnValue_2;
    params.CallFunc_FCeil_ReturnValue = (int32_t)CallFunc_FCeil_ReturnValue;
    params.CallFunc_FTrunc_ReturnValue = (int32_t)CallFunc_FTrunc_ReturnValue;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_OL_VirtualTexturePaths_01_C::ExecuteUbergraph_BP_OL_VirtualTexturePaths_01(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Overland_Common/Objects/Coast/Blueprints/BP_OL_VirtualTexturePaths_01.BP_OL_VirtualTexturePaths_01_C.ExecuteUbergraph_BP_OL_VirtualTexturePaths_01"));
    struct Params_ExecuteUbergraph_BP_OL_VirtualTexturePaths_01 {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_OL_VirtualTexturePaths_01 params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
