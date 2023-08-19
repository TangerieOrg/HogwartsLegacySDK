#include "ABP_Sanc_HubBookshelfRightUnit_01_Dwiz_C.hpp"
#include "ABP_SelfArrangingBookshelf_Parent_C.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UHierarchicalInstancedStaticMeshComponent.hpp"
#include "UMaterialBillboardComponent.hpp"
#include "USplineComponent.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTransformationFxInfoComponent.hpp"
ABP_Sanc_HubBookshelfRightUnit_01_Dwiz_C* ABP_Sanc_HubBookshelfRightUnit_01_Dwiz_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Sanctuary/Blueprints/Structures/BP_Sanc_HubBookshelfRightUnit_01_Dwiz.BP_Sanc_HubBookshelfRightUnit_01_Dwiz_C");
    return (ABP_Sanc_HubBookshelfRightUnit_01_Dwiz_C*)res;
}
void ABP_Sanc_HubBookshelfRightUnit_01_Dwiz_C::UserConstructionScript(TArray<USplineComponent*>& K2Node_MakeArray_Array) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Structures/BP_Sanc_HubBookshelfRightUnit_01_Dwiz.BP_Sanc_HubBookshelfRightUnit_01_Dwiz_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        TArray<USplineComponent*> K2Node_MakeArray_Array; // 0x0
    }; // Size: 0x10
    Params_UserConstructionScript params{};
    params.K2Node_MakeArray_Array = (TArray<USplineComponent*>)K2Node_MakeArray_Array;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
