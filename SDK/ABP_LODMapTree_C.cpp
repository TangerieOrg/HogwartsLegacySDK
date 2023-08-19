#include "AActor.hpp"
#include "ABP_LODMapTree_C.hpp"
#include "FBoxSphereBounds.hpp"
#include "FSTR_LODMapTreeData.hpp"
#include "FSTR_SeasonSelectorData.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
#include "UHierarchicalInstancedStaticMeshComponent.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
#include "USeasonSelectorComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_LODMapTree_C::ObtainSourceData(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1) {}
void ABP_LODMapTree_C::FindAttachedSeasonSelector(TArray<USeasonSelectorComponent*>& SeasonSelectors, UObject* MeshComponent, bool& HasSeasons, FSTR_SeasonSelectorData& SeasonSelector, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, USeasonSelectorComponent* CallFunc_Array_Get_Item, USceneComponent* CallFunc_GetAttachParent_ReturnValue, FSTR_SeasonSelectorData K2Node_MakeStruct_STR_SeasonSelectorData, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/ProxyLODHarvest/BP_LODMapTree.BP_LODMapTree_C.FindAttachedSeasonSelector"));
    struct Params_FindAttachedSeasonSelector {
        TArray<USeasonSelectorComponent*> SeasonSelectors; // 0x0
        UObject* MeshComponent; // 0x10
        bool HasSeasons; // 0x18
        char pad_19[0x7];
        FSTR_SeasonSelectorData SeasonSelector; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0xb0
        int32_t Temp_int_Array_Index_Variable; // 0xb4
        int32_t Temp_int_Loop_Counter_Variable; // 0xb8
        char pad_bc[0x4];
        USeasonSelectorComponent* CallFunc_Array_Get_Item; // 0xc0
        USceneComponent* CallFunc_GetAttachParent_ReturnValue; // 0xc8
        FSTR_SeasonSelectorData K2Node_MakeStruct_STR_SeasonSelectorData; // 0xd0
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x160
        bool CallFunc_Less_IntInt_ReturnValue; // 0x161
        char pad_162[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x164
    }; // Size: 0x168
    Params_FindAttachedSeasonSelector params{};
    params.SeasonSelectors = (TArray<USeasonSelectorComponent*>)SeasonSelectors;
    params.MeshComponent = (UObject*)MeshComponent;
    params.HasSeasons = (bool)HasSeasons;
    params.SeasonSelector = (FSTR_SeasonSelectorData)SeasonSelector;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Array_Get_Item = (USeasonSelectorComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_GetAttachParent_ReturnValue = (USceneComponent*)CallFunc_GetAttachParent_ReturnValue;
    params.K2Node_MakeStruct_STR_SeasonSelectorData = (FSTR_SeasonSelectorData)K2Node_MakeStruct_STR_SeasonSelectorData;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    SeasonSelectors = params.SeasonSelectors;
    HasSeasons = params.HasSeasons;
    SeasonSelector = params.SeasonSelector;
}
ABP_LODMapTree_C* ABP_LODMapTree_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/ProxyLODHarvest/BP_LODMapTree.BP_LODMapTree_C");
    return (ABP_LODMapTree_C*)res;
}
void ABP_LODMapTree_C::CollectAllStaticMeshComponents(AActor* Actor, TArray<FTransform> InstancesTransforms, TArray<USeasonSelectorComponent*> SeasonSelectors, int32_t Temp_int_Array_Index_Variable, TArray<USeasonSelectorComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, TArray<UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue_1, int32_t Temp_int_Variable, UStaticMeshComponent* CallFunc_Array_Get_Item, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, UInstancedStaticMeshComponent* K2Node_DynamicCast_AsInstanced_Static_Mesh_Component, bool K2Node_DynamicCast_bSuccess, FTransform CallFunc_GetInstanceTransform_OutInstanceTransform, bool CallFunc_GetInstanceTransform_ReturnValue, FBoxSphereBounds CallFunc_GetBounds_ReturnValue, int32_t CallFunc_GetInstanceCount_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanNOR_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_FindAttachedSeasonSelector_HasSeasons, FSTR_SeasonSelectorData CallFunc_FindAttachedSeasonSelector_SeasonSelector, FSTR_LODMapTreeData K2Node_MakeStruct_STR_LODMapTreeData, int32_t CallFunc_Array_Add_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/ProxyLODHarvest/BP_LODMapTree.BP_LODMapTree_C.CollectAllStaticMeshComponents"));
    struct Params_CollectAllStaticMeshComponents {
        AActor* Actor; // 0x0
        TArray<FTransform> InstancesTransforms; // 0x8
        TArray<USeasonSelectorComponent*> SeasonSelectors; // 0x18
        int32_t Temp_int_Array_Index_Variable; // 0x28
        char pad_2c[0x4];
        TArray<USeasonSelectorComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue; // 0x30
        TArray<UStaticMeshComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue_1; // 0x40
        int32_t Temp_int_Variable; // 0x50
        char pad_54[0x4];
        UStaticMeshComponent* CallFunc_Array_Get_Item; // 0x58
        FTransform CallFunc_K2_GetComponentToWorld_ReturnValue; // 0x60
        UInstancedStaticMeshComponent* K2Node_DynamicCast_AsInstanced_Static_Mesh_Component; // 0x90
        bool K2Node_DynamicCast_bSuccess; // 0x98
        char pad_99[0x7];
        FTransform CallFunc_GetInstanceTransform_OutInstanceTransform; // 0xa0
        bool CallFunc_GetInstanceTransform_ReturnValue; // 0xd0
        char pad_d1[0x3];
        FBoxSphereBounds CallFunc_GetBounds_ReturnValue; // 0xd4
        int32_t CallFunc_GetInstanceCount_ReturnValue; // 0xf0
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0xf4
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0xf8
        bool CallFunc_BooleanNOR_ReturnValue; // 0xf9
        char pad_fa[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xfc
        int32_t CallFunc_Array_Length_ReturnValue; // 0x100
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x104
        bool CallFunc_BooleanAND_ReturnValue; // 0x105
        char pad_106[0x2];
        int32_t Temp_int_Loop_Counter_Variable; // 0x108
        bool CallFunc_Less_IntInt_ReturnValue; // 0x10c
        char pad_10d[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x110
        int32_t CallFunc_Array_Add_ReturnValue; // 0x114
        bool CallFunc_FindAttachedSeasonSelector_HasSeasons; // 0x118
        char pad_119[0x7];
        FSTR_SeasonSelectorData CallFunc_FindAttachedSeasonSelector_SeasonSelector; // 0x120
        FSTR_LODMapTreeData K2Node_MakeStruct_STR_LODMapTreeData; // 0x1b0
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0x290
    }; // Size: 0x294
    Params_CollectAllStaticMeshComponents params{};
    params.Actor = (AActor*)Actor;
    params.InstancesTransforms = (TArray<FTransform>)InstancesTransforms;
    params.SeasonSelectors = (TArray<USeasonSelectorComponent*>)SeasonSelectors;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_K2_GetComponentsByClass_ReturnValue = (TArray<USeasonSelectorComponent*>)CallFunc_K2_GetComponentsByClass_ReturnValue;
    params.CallFunc_K2_GetComponentsByClass_ReturnValue_1 = (TArray<UStaticMeshComponent*>)CallFunc_K2_GetComponentsByClass_ReturnValue_1;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Array_Get_Item = (UStaticMeshComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_K2_GetComponentToWorld_ReturnValue = (FTransform)CallFunc_K2_GetComponentToWorld_ReturnValue;
    params.K2Node_DynamicCast_AsInstanced_Static_Mesh_Component = (UInstancedStaticMeshComponent*)K2Node_DynamicCast_AsInstanced_Static_Mesh_Component;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetInstanceTransform_OutInstanceTransform = (FTransform)CallFunc_GetInstanceTransform_OutInstanceTransform;
    params.CallFunc_GetInstanceTransform_ReturnValue = (bool)CallFunc_GetInstanceTransform_ReturnValue;
    params.CallFunc_GetBounds_ReturnValue = (FBoxSphereBounds)CallFunc_GetBounds_ReturnValue;
    params.CallFunc_GetInstanceCount_ReturnValue = (int32_t)CallFunc_GetInstanceCount_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_BooleanNOR_ReturnValue = (bool)CallFunc_BooleanNOR_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_FindAttachedSeasonSelector_HasSeasons = (bool)CallFunc_FindAttachedSeasonSelector_HasSeasons;
    params.CallFunc_FindAttachedSeasonSelector_SeasonSelector = (FSTR_SeasonSelectorData)CallFunc_FindAttachedSeasonSelector_SeasonSelector;
    params.K2Node_MakeStruct_STR_LODMapTreeData = (FSTR_LODMapTreeData)K2Node_MakeStruct_STR_LODMapTreeData;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_K2_GetComponentsByClass_ReturnValue = params.CallFunc_K2_GetComponentsByClass_ReturnValue;
    CallFunc_K2_GetComponentsByClass_ReturnValue_1 = params.CallFunc_K2_GetComponentsByClass_ReturnValue_1;
}
void ABP_LODMapTree_C::UserConstructionScript0(UStaticMeshComponent* LastCreatedComp, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, FTransform Temp_struct_Variable, USeasonSelectorComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, FSTR_LODMapTreeData CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FTransform CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, UHierarchicalInstancedStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_2, int32_t CallFunc_AddInstanceWorldSpace_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/ProxyLODHarvest/BP_LODMapTree.BP_LODMapTree_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        UStaticMeshComponent* LastCreatedComp; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xc
        int32_t Temp_int_Array_Index_Variable; // 0x10
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x14
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x18
        int32_t Temp_int_Array_Index_Variable_1; // 0x1c
        FTransform Temp_struct_Variable; // 0x20
        USeasonSelectorComponent* CallFunc_AddComponent_ReturnValue; // 0x50
        bool CallFunc_K2_AttachToComponent_ReturnValue; // 0x58
        char pad_59[0x7];
        FSTR_LODMapTreeData CallFunc_Array_Get_Item; // 0x60
        int32_t CallFunc_Array_Length_ReturnValue; // 0x140
        bool CallFunc_Less_IntInt_ReturnValue; // 0x144
        char pad_145[0xb];
        FTransform CallFunc_Array_Get_Item_1; // 0x150
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x180
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x184
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x188
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0x189
        char pad_18a[0x6];
        UHierarchicalInstancedStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1; // 0x190
        UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_2; // 0x198
        int32_t CallFunc_AddInstanceWorldSpace_ReturnValue; // 0x1a0
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x1a4
        bool CallFunc_SetStaticMesh_ReturnValue_1; // 0x1a5
    }; // Size: 0x1a6
    Params_UserConstructionScript params{};
    params.LastCreatedComp = (UStaticMeshComponent*)LastCreatedComp;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.CallFunc_AddComponent_ReturnValue = (USeasonSelectorComponent*)CallFunc_AddComponent_ReturnValue;
    params.CallFunc_K2_AttachToComponent_ReturnValue = (bool)CallFunc_K2_AttachToComponent_ReturnValue;
    params.CallFunc_Array_Get_Item = (FSTR_LODMapTreeData)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (FTransform)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.CallFunc_AddComponent_ReturnValue_1 = (UHierarchicalInstancedStaticMeshComponent*)CallFunc_AddComponent_ReturnValue_1;
    params.CallFunc_AddComponent_ReturnValue_2 = (UStaticMeshComponent*)CallFunc_AddComponent_ReturnValue_2;
    params.CallFunc_AddInstanceWorldSpace_ReturnValue = (int32_t)CallFunc_AddInstanceWorldSpace_ReturnValue;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    params.CallFunc_SetStaticMesh_ReturnValue_1 = (bool)CallFunc_SetStaticMesh_ReturnValue_1;
    ProcessEvent(func, &params);
}
