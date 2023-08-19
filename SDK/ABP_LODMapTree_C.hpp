#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FBoxSphereBounds.hpp"
#include "FSTR_LODMapTreeData.hpp"
#include "FSTR_SeasonSelectorData.hpp"
#include "FTransform.hpp"
class USceneComponent;
class UHierarchicalInstancedStaticMeshComponent;
class USeasonSelectorComponent;
class UStaticMeshComponent;
class UInstancedStaticMeshComponent;
class UObject;
#pragma pack(push, 1)
class ABP_LODMapTree_C : public AActor {
public:
    USceneComponent* DefaultSceneRoot; // 0x248
    TArray<void*> SourceActor; // 0x250
    FTransform SourceTransform; // 0x260
    TArray<FSTR_LODMapTreeData> SourceData; // 0x290
    float MinComponentSize; // 0x2a0
    char pad_2a4[0xc];
    static ABP_LODMapTree_C* StaticClass();
    void CollectAllStaticMeshComponents(AActor* Actor, TArray<FTransform> InstancesTransforms, TArray<USeasonSelectorComponent*> SeasonSelectors, int32_t Temp_int_Array_Index_Variable, TArray<USeasonSelectorComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, TArray<UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue_1, int32_t Temp_int_Variable, UStaticMeshComponent* CallFunc_Array_Get_Item, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, UInstancedStaticMeshComponent* K2Node_DynamicCast_AsInstanced_Static_Mesh_Component, bool K2Node_DynamicCast_bSuccess, FTransform CallFunc_GetInstanceTransform_OutInstanceTransform, bool CallFunc_GetInstanceTransform_ReturnValue, FBoxSphereBounds CallFunc_GetBounds_ReturnValue, int32_t CallFunc_GetInstanceCount_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanNOR_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_FindAttachedSeasonSelector_HasSeasons, FSTR_SeasonSelectorData CallFunc_FindAttachedSeasonSelector_SeasonSelector, FSTR_LODMapTreeData K2Node_MakeStruct_STR_LODMapTreeData, int32_t CallFunc_Array_Add_ReturnValue_1);
    void FindAttachedSeasonSelector(TArray<USeasonSelectorComponent*>& SeasonSelectors, UObject* MeshComponent, bool& HasSeasons, FSTR_SeasonSelectorData& SeasonSelector, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, USeasonSelectorComponent* CallFunc_Array_Get_Item, USceneComponent* CallFunc_GetAttachParent_ReturnValue, FSTR_SeasonSelectorData K2Node_MakeStruct_STR_SeasonSelectorData, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
    void ObtainSourceData(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1);
    void UserConstructionScript0(UStaticMeshComponent* LastCreatedComp, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, FTransform Temp_struct_Variable, USeasonSelectorComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, FSTR_LODMapTreeData CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FTransform CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, UHierarchicalInstancedStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_2, int32_t CallFunc_AddInstanceWorldSpace_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1);
}; // Size: 0x2b0
#pragma pack(pop)
