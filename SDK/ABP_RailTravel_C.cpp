#include "AActor.hpp"
#include "ABP_RailTravel_C.hpp"
#include "ABiped_Player.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UClass.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USplineComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_RailTravel_C::ExecuteUbergraph_BP_RailTravel(int32_t EntryPoint, UClass* Temp_class_Variable, AActor* K2Node_Event_OtherActor_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OtherActor, ABiped_Player* K2Node_DynamicCast_AsBiped_Player_1, bool K2Node_DynamicCast_bSuccess_1, UClass* K2Node_CustomEvent_Loaded) {}
void ABP_RailTravel_C::UserConstructionScript0(float offsetPerInterestPointActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/BP_RailTravel.BP_RailTravel_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        float offsetPerInterestPointActor; // 0x0
    }; // Size: 0x4
    Params_UserConstructionScript params{};
    params.offsetPerInterestPointActor = (float)offsetPerInterestPointActor;
    ProcessEvent(func, &params);
}
ABP_RailTravel_C* ABP_RailTravel_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Blueprints/BP_RailTravel.BP_RailTravel_C");
    return (ABP_RailTravel_C*)res;
}
void ABP_RailTravel_C::OnLoaded_3760AC4F441A6F01D5ACA992D45BFB6A(UClass* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/BP_RailTravel.BP_RailTravel_C.OnLoaded_3760AC4F441A6F01D5ACA992D45BFB6A"));
    struct Params_OnLoaded_3760AC4F441A6F01D5ACA992D45BFB6A {
        UClass* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_3760AC4F441A6F01D5ACA992D45BFB6A params{};
    params.Loaded = (UClass*)Loaded;
    ProcessEvent(func, &params);
}
void ABP_RailTravel_C::ReceiveActorBeginOverlap0(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/BP_RailTravel.BP_RailTravel_C.ReceiveActorBeginOverlap"));
    struct Params_ReceiveActorBeginOverlap {
        AActor* OtherActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveActorBeginOverlap params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ABP_RailTravel_C::ReceiveActorEndOverlap0(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/BP_RailTravel.BP_RailTravel_C.ReceiveActorEndOverlap"));
    struct Params_ReceiveActorEndOverlap {
        AActor* OtherActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveActorEndOverlap params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ABP_RailTravel_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/BP_RailTravel.BP_RailTravel_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_RailTravel_C::ReceiveTick0(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/BP_RailTravel.BP_RailTravel_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
