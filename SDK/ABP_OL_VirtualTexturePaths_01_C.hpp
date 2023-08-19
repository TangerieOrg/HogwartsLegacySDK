#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EObjectTypeQuery.hpp"
#include "FHitResult.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UMaterialInterface;
class USplineComponent;
class URuntimeVirtualTexture;
class USceneComponent;
class USplineMeshComponent;
class UStaticMesh;
class UTexture;
class ABP_OL_Coast_VirtualTexturePaths_01_C;
class AInstancedFoliageActor;
class AStaticMeshActor;
class UPhysicalMaterial;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_OL_VirtualTexturePaths_01_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USplineComponent* Spline; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    float Mesh_Length; // 0x260
    int32_t Mesh_Pieces; // 0x264
    float Mesh_Length_2; // 0x268
    float Mesh_Width; // 0x26c
    UMaterialInterface* Path_Material; // 0x270
    UStaticMesh* Path_Mesh; // 0x278
    TArray<USplineMeshComponent*> Virtual_Textures; // 0x280
    TArray<URuntimeVirtualTexture*> NewVar_0; // 0x290
    TArray<URuntimeVirtualTexture*> VirtualTexture; // 0x2a0
    bool Virtual_Texturing; // 0x2b0
    char pad_2b1[0x3];
    float Texture_Length; // 0x2b4
    bool NewVar_1; // 0x2b8
    char pad_2b9[0x7];
    UTexture* Base_Colour; // 0x2c0
    UTexture* HRO; // 0x2c8
    UTexture* Normal; // 0x2d0
    FLinearColor Tint; // 0x2d8
    float UV_Scale_Near; // 0x2e8
    float Path_Focus; // 0x2ec
    float Blend_Contrast; // 0x2f0
    FLinearColor Path_Tint_Middle; // 0x2f4
    char pad_304[0x4];
    UTexture* Path_Shape_Normal; // 0x308
    UTexture* Base_Colour_2; // 0x310
    UTexture* HRO_2; // 0x318
    UTexture* Normal_2; // 0x320
    float UV_Scale_Near2; // 0x328
    FLinearColor Path_Tint_2; // 0x32c
    float Tracks_Normal_Strength; // 0x33c
    float Path_Normal_Edge_Strength; // 0x340
    float Blend2_Offset; // 0x344
    float Height2_Strength; // 0x348
    float Blend2_Contrast; // 0x34c
    float Normal2_Strength; // 0x350
    float Normal1_Strength; // 0x354
    float Normal_Edge_Start; // 0x358
    float Normal_Edge_Contrast; // 0x35c
    float Roughness1_Adjust; // 0x360
    float Roughness2_Adjust; // 0x364
    float Track_Depth_For_Puddles; // 0x368
    char pad_36c[0x4];
    UTexture* Path_Shape_Mask; // 0x370
    float Path_Offset_Middle; // 0x378
    float Path_Sharpnes_Middle; // 0x37c
    bool Create_Dynamic_Material; // 0x380
    char pad_381[0x7];
    TArray<EObjectTypeQuery> Object_Types; // 0x388
    TArray<AActor*> Ignore; // 0x398
    FVector Last_Block_Impact; // 0x3a8
    int32_t Snapping_Point_Index; // 0x3b4
    bool Landscape_Hit; // 0x3b8
    char pad_3b9[0x3];
    int32_t Snapping_Test_Itteration; // 0x3bc
    bool Continue_Snapping_Itteration_Loop; // 0x3c0
    bool Spline_Or_Point; // 0x3c1
    char pad_3c2[0x6];
    TArray<ABP_OL_VirtualTexturePaths_01_C*> Level_Actors; // 0x3c8
    static ABP_OL_VirtualTexturePaths_01_C* StaticClass();
    void Clear_Array();
    void Snap_To_Landscape(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Clamp_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_4, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Array_Index_Variable_3, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_5, int32_t Temp_int_Array_Index_Variable_4, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_6, int32_t Temp_int_Loop_Counter_Variable_4, TArray<ABP_OL_VirtualTexturePaths_01_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32_t CallFunc_Add_IntInt_ReturnValue_7, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<ABP_OL_Coast_VirtualTexturePaths_01_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, int32_t Temp_int_Loop_Counter_Variable_5, ABP_OL_Coast_VirtualTexturePaths_01_C* CallFunc_Array_Get_Item, TArray<AActor*>& CallFunc_GetAllChildActors_ChildActors, int32_t CallFunc_Add_IntInt_ReturnValue_8, AActor* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable_5, ABP_OL_VirtualTexturePaths_01_C* CallFunc_Array_Get_Item_2, TArray<AActor*>& CallFunc_GetAllChildActors_ChildActors_1, AActor* CallFunc_Array_Get_Item_3, int32_t CallFunc_Array_Length_ReturnValue_3, int32_t CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, FVector CallFunc_GetTangentAtSplinePoint_ReturnValue, FVector CallFunc_GetLocationAtSplinePoint_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_GetLocationAtSplinePoint_ReturnValue_1, FVector CallFunc_GetLocationAtSplinePoint_ReturnValue_2, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue, TArray<AInstancedFoliageActor*>& CallFunc_GetAllActorsOfClass_OutActors_2, TArray<AStaticMeshActor*>& CallFunc_GetAllActorsOfClass_OutActors_3, AStaticMeshActor* CallFunc_Array_Get_Item_4, int32_t CallFunc_Array_Length_ReturnValue_4, int32_t CallFunc_Array_Add_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, FVector CallFunc_GetLocationAtSplinePoint_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, FVector CallFunc_MakeVector_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_3, TArray<FHitResult>& CallFunc_LineTraceMulti_OutHits, bool CallFunc_LineTraceMulti_ReturnValue, int32_t CallFunc_GetNumberOfSplinePoints_ReturnValue, FHitResult CallFunc_Array_Get_Item_5, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, float CallFunc_Add_FloatFloat_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_4, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5);
    void Trace_To_Landscape(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, TArray<FHitResult>& CallFunc_LineTraceMulti_OutHits, bool CallFunc_LineTraceMulti_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FHitResult CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, int32_t CallFunc_Array_Add_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Contains_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_2);
    void UserConstructionScript0(FTransform Temp_struct_Variable, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FLinearColor CallFunc_MakeColor_ReturnValue, FLinearColor CallFunc_MakeColor_ReturnValue_1, FLinearColor CallFunc_MakeColor_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue, FVector CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, FVector CallFunc_ClampVectorSize_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, float CallFunc_GetSplineLength_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_GetSplineLength_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, int32_t CallFunc_FCeil_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_OL_VirtualTexturePaths_01(int32_t EntryPoint);
}; // Size: 0x3d8
#pragma pack(pop)
