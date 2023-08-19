#include "AActor.hpp"
#include "ABP_NavCrawl_C.hpp"
#include "ABiped_Character.hpp"
#include "AHUD.hpp"
#include "APhoenixHUD.hpp"
#include "APlayerController.hpp"
#include "ETargetSpeedMode\Type.hpp"
#include "FFallbackStruct.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBoxComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
void ABP_NavCrawl_C::ReceiveActorEndOverlap0(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_NavCrawl.BP_NavCrawl_C.ReceiveActorEndOverlap"));
    struct Params_ReceiveActorEndOverlap {
        AActor* OtherActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveActorEndOverlap params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
bool ABP_NavCrawl_C::GetGeometryExclusionOOBBs(TArray<FFallbackStruct>& OutOOBBs) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_NavCrawl.BP_NavCrawl_C.GetGeometryExclusionOOBBs"));
    struct Params_GetGeometryExclusionOOBBs {
        TArray<FFallbackStruct> OutOOBBs; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetGeometryExclusionOOBBs params{};
    params.OutOOBBs = (TArray<FFallbackStruct>)OutOOBBs;
    ProcessEvent(func, &params);
    OutOOBBs = params.OutOOBBs;
    return (bool)params.ReturnValue;
}
ABP_NavCrawl_C* ABP_NavCrawl_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Triggers/BP_NavCrawl.BP_NavCrawl_C");
    return (ABP_NavCrawl_C*)res;
}
bool ABP_NavCrawl_C::GetDebugDiscardedTriangles() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_NavCrawl.BP_NavCrawl_C.GetDebugDiscardedTriangles"));
    struct Params_GetDebugDiscardedTriangles {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDebugDiscardedTriangles params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_NavCrawl_C::GetCrouchGeometryBoxComponents(TArray<UBoxComponent*>& OutBoxComponents, TArray<UBoxComponent*>& K2Node_MakeArray_Array, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_NavCrawl.BP_NavCrawl_C.GetCrouchGeometryBoxComponents"));
    struct Params_GetCrouchGeometryBoxComponents {
        TArray<UBoxComponent*> OutBoxComponents; // 0x0
        bool ReturnValue; // 0x10
        char pad_11[0x7];
        TArray<UBoxComponent*> K2Node_MakeArray_Array; // 0x18
        bool CallFunc_BooleanAND_ReturnValue; // 0x28
    }; // Size: 0x29
    Params_GetCrouchGeometryBoxComponents params{};
    params.OutBoxComponents = (TArray<UBoxComponent*>)OutBoxComponents;
    params.K2Node_MakeArray_Array = (TArray<UBoxComponent*>)K2Node_MakeArray_Array;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    OutBoxComponents = params.OutBoxComponents;
    return (bool)params.ReturnValue;
}
bool ABP_NavCrawl_C::GetGeometryExclusionBoxComponents(TArray<UBoxComponent*>& OutBoxComponents, bool CallFunc_BooleanAND_ReturnValue, TArray<UBoxComponent*>& K2Node_MakeArray_Array) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_NavCrawl.BP_NavCrawl_C.GetGeometryExclusionBoxComponents"));
    struct Params_GetGeometryExclusionBoxComponents {
        TArray<UBoxComponent*> OutBoxComponents; // 0x0
        bool ReturnValue; // 0x10
        bool CallFunc_BooleanAND_ReturnValue; // 0x11
        char pad_12[0x6];
        TArray<UBoxComponent*> K2Node_MakeArray_Array; // 0x18
    }; // Size: 0x28
    Params_GetGeometryExclusionBoxComponents params{};
    params.OutBoxComponents = (TArray<UBoxComponent*>)OutBoxComponents;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.K2Node_MakeArray_Array = (TArray<UBoxComponent*>)K2Node_MakeArray_Array;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    OutBoxComponents = params.OutBoxComponents;
    return (bool)params.ReturnValue;
}
void ABP_NavCrawl_C::UserConstructionScript0(bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_NavCrawl.BP_NavCrawl_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        bool CallFunc_BooleanAND_ReturnValue; // 0x0
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x1
    }; // Size: 0x2
    Params_UserConstructionScript params{};
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    ProcessEvent(func, &params);
}
void ABP_NavCrawl_C::ReceiveActorBeginOverlap0(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_NavCrawl.BP_NavCrawl_C.ReceiveActorBeginOverlap"));
    struct Params_ReceiveActorBeginOverlap {
        AActor* OtherActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveActorBeginOverlap params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ABP_NavCrawl_C::ExecuteUbergraph_BP_NavCrawl(int32_t EntryPoint, APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, AActor* K2Node_Event_OtherActor_1, APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess, ABiped_Character* K2Node_DynamicCast_AsBiped_Character, bool K2Node_DynamicCast_bSuccess_1) {}
