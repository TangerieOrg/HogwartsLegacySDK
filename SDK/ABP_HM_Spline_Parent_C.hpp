#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ECollisionChannel.hpp"
#include "ECollisionEnabled\Type.hpp"
#include "ESplineMeshAxis\Type.hpp"
#include "ESplinePointType\Type.hpp"
#include "FF_SplineCollisionGenerationSettings.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class USplineComponent;
class UPhysicalMaterial;
class UBP_SplineToolGenerator_C;
class UHierarchicalInstancedStaticMeshComponent;
class UStaticMesh;
class UBP_SplineCollisionGenerator_C;
class USplineMeshComponent;
class UStaticMeshComponent;
class UInstancedStaticMeshComponent;
class AInstancedFoliageActor;
class UBoxComponent;
#pragma pack(push, 1)
class ABP_HM_Spline_Parent_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USplineComponent* Spline; // 0x250
    UBP_SplineToolGenerator_C* BP_SplineToolGenerator; // 0x258
    UBP_SplineCollisionGenerator_C* BP_SplineCollisionGenerator; // 0x260
    bool UseHISMToolComponent; // 0x268
    char pad_269[0x3];
    float Section_Length; // 0x26c
    USplineMeshComponent* Spline_Mesh; // 0x270
    int32_t Last_Index; // 0x278
    float Normalize; // 0x27c
    int32_t Mesh_Select; // 0x280
    bool Random_Mesh; // 0x284
    char pad_285[0x3];
    FRandomStream Random_Seed; // 0x288
    TArray<void*> Meshes; // 0x290
    TArray<int32_t> Location_Array; // 0x2a0
    bool Snap; // 0x2b0
    ESplinePointType::Type Spline_Type; // 0x2b1
    bool Closed_Spline; // 0x2b2
    ESplineMeshAxis::Type Forward_Axis; // 0x2b3
    bool Tag_Visibility; // 0x2b4
    char pad_2b5[0x3];
    UStaticMeshComponent* Start_SM; // 0x2b8
    bool StartAndEndMesh; // 0x2c0
    char pad_2c1[0x7];
    UStaticMesh* Start_Mesh; // 0x2c8
    UStaticMeshComponent* End_SM; // 0x2d0
    UStaticMesh* End_Mesh; // 0x2d8
    bool LimitStretch; // 0x2e0
    char pad_2e1[0x3];
    FVector EndMeshROTAdjustment; // 0x2e4
    float SectionOffset; // 0x2f0
    char pad_2f4[0x54];
    bool AlternateSplineMeshes; // 0x348
    char pad_349[0x3];
    float Spline_Length; // 0x34c
    bool Reorder_Meshes; // 0x350
    char pad_351[0x7];
    TArray<int32_t> Set_to_A; // 0x358
    TArray<int32_t> Set_to_B; // 0x368
    TArray<int32_t> Set_to_C; // 0x378
    TArray<int32_t> Set_to_D; // 0x388
    bool Cast_Shadows; // 0x398
    char pad_399[0x3];
    float CheckDistance; // 0x39c
    float AngleThreshold; // 0x3a0
    float BoxHeight; // 0x3a4
    float BoxWidth; // 0x3a8
    bool UsePitch; // 0x3ac
    char pad_3ad[0x1b];
    UPhysicalMaterial* PhysicsMaterial; // 0x3c8
    bool GenerateOverlapEvents; // 0x3d0
    bool UseBaseCollisionProfile; // 0x3d1
    char pad_3d2[0x2];
    FName BaseCollisionProfileName; // 0x3d4
    ECollisionEnabled::Type CollisionEnabled; // 0x3dc
    ECollisionChannel ObjectType; // 0x3dd
    char pad_3de[0x52];
    bool CreateBoxCollisions; // 0x430
    char pad_431[0x7];
    UHierarchicalInstancedStaticMeshComponent* CollisionHISM; // 0x438
    bool RotateMeshAtOrigin; // 0x440
    bool Flip_Mesh; // 0x441
    char pad_442[0x2];
    FLinearColor Wall_Color; // 0x444
    bool Use_Spline_Mesh_by_Max_Angle; // 0x454
    char pad_455[0x3];
    float Max_Angle_Delta; // 0x458
    float Spacing_Offset; // 0x45c
    FName In_Collision_Profile_Name; // 0x460
    bool Enable_Debugging; // 0x468
    char pad_469[0x3];
    int32_t Debug_ISM_Components_Count; // 0x46c
    int32_t Debug_Spline_Mesh_Components_Count; // 0x470
    int32_t Debug_ISM_Instances_Count; // 0x474
    float Start_Mesh_Offset; // 0x478
    float End_Mesh_Offset; // 0x47c
    int32_t Use_HISMThreshold; // 0x480
    char pad_484[0x4];
    static ABP_HM_Spline_Parent_C* StaticClass();
    void Request_Destroy_Spline_Helper(USplineComponent* SplineHelper, bool& Success, bool CallFunc_IsValid_ReturnValue);
    void RequestDestroyComponent(UInstancedStaticMeshComponent* ISM_Component, bool& Success, bool CallFunc_IsValid_ReturnValue, TArray<UInstancedStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32_t CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, UInstancedStaticMeshComponent* CallFunc_Array_Get_Item);
    void GetFoliageActors(TArray<AInstancedFoliageActor*>& OutActors, TArray<AInstancedFoliageActor*>& CallFunc_GetAllActorsOfClass_OutActors);
    void GetStaticMeshesUsedOnSpline(TArray<UStaticMesh*>& UsedMeshes, TArray<float>& MeshChance, TArray<float> MeshChanceNum, TArray<UStaticMesh*> ValidSetMeshes, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, float Temp_float_Variable, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue);
    void ReOrderSplineMeshes(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t Temp_int_Array_Index_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void AlternateMeshes();
    void Spline_Constructor(int32_t RandomResult, float SegmentLength, TArray<UBoxComponent*> GeneratedBoxes, bool ReachedEnd, float CurrentPoint, float LastPointChecked, float AccumulatedRotation, float LastBoxEndPoint, int32_t CallFunc_GetComponentCounts_Debug_ISM_Components_Count, int32_t CallFunc_GetComponentCounts_Debug_SplineMeshComponentsCount, int32_t CallFunc_GetComponentCounts_Debug_ISM_Instances_Count, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue, int32_t CallFunc_SelectInt_ReturnValue, TArray<UStaticMesh*>& CallFunc_GetStaticMeshesUsedOnSpline_UsedMeshes, TArray<float>& CallFunc_GetStaticMeshesUsedOnSpline_MeshChance, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, FTransform Temp_struct_Variable, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue);
    void Location_Tags(FTransform Temp_struct_Variable, int32_t Temp_int_Variable);
    void UserConstructionScript0(TArray<AInstancedFoliageActor*>& CallFunc_GetFoliageActors_OutActors, int32_t Temp_int_Variable, int32_t Temp_int_Array_Index_Variable, FString CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_2, int32_t CallFunc_Percent_IntInt_ReturnValue, int32_t CallFunc_Percent_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_1, FTransform Temp_struct_Variable, UHierarchicalInstancedStaticMeshComponent* CallFunc_AddComponent_ReturnValue, FF_SplineCollisionGenerationSettings K2Node_MakeStruct_F_SplineCollisionGenerationSettings);
    void Show_Location_Tags();
    void ExecuteUbergraph_BP_HM_Spline_Parent(int32_t EntryPoint);
}; // Size: 0x488
#pragma pack(pop)
