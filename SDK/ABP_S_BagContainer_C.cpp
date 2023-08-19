#include "ABP_S_BagContainer_C.hpp"
#include "AWorldObject.hpp"
#include "EEnvironment\Type.hpp"
#include "FMeshList.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "ULootDropComponent.hpp"
#include "UObject.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_S_BagContainer_C::CloseContainer(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_BagContainer.BP_S_BagContainer_C.CloseContainer"));
    struct Params_CloseContainer {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CloseContainer params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
ABP_S_BagContainer_C* ABP_S_BagContainer_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/BP_S_BagContainer.BP_S_BagContainer_C");
    return (ABP_S_BagContainer_C*)res;
}
void ABP_S_BagContainer_C::OnLoaded_7E28B5E6437622A54BEC36AB24E49C42(UObject* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_BagContainer.BP_S_BagContainer_C.OnLoaded_7E28B5E6437622A54BEC36AB24E49C42"));
    struct Params_OnLoaded_7E28B5E6437622A54BEC36AB24E49C42 {
        UObject* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_7E28B5E6437622A54BEC36AB24E49C42 params{};
    params.Loaded = (UObject*)Loaded;
    ProcessEvent(func, &params);
}
void ABP_S_BagContainer_C::UserConstructionScript(FMeshList MeshesOpen, FMeshList Meshes, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream) {}
void ABP_S_BagContainer_C::OnLoaded_F2E9B2D244606875283867BCBE5D873B(UObject* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_BagContainer.BP_S_BagContainer_C.OnLoaded_F2E9B2D244606875283867BCBE5D873B"));
    struct Params_OnLoaded_F2E9B2D244606875283867BCBE5D873B {
        UObject* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_F2E9B2D244606875283867BCBE5D873B params{};
    params.Loaded = (UObject*)Loaded;
    ProcessEvent(func, &params);
}
void ABP_S_BagContainer_C::InteractionInitiated(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_BagContainer.BP_S_BagContainer_C.InteractionInitiated"));
    struct Params_InteractionInitiated {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_InteractionInitiated params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_S_BagContainer_C::BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_BagContainer.BP_S_BagContainer_C.BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature"));
    struct Params_BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
void ABP_S_BagContainer_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_BagContainer.BP_S_BagContainer_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_S_BagContainer_C::Perceived_Interact(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_BagContainer.BP_S_BagContainer_C.Perceived_Interact"));
    struct Params_Perceived_Interact {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Perceived_Interact params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_S_BagContainer_C::NoLongerPerceived_Interact(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_BagContainer.BP_S_BagContainer_C.NoLongerPerceived_Interact"));
    struct Params_NoLongerPerceived_Interact {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_NoLongerPerceived_Interact params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_S_BagContainer_C::CheckLoot() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_BagContainer.BP_S_BagContainer_C.CheckLoot"));
    struct Params_CheckLoot {
    }; // Size: 0x0
    Params_CheckLoot params{};
    ProcessEvent(func, &params);
}
void ABP_S_BagContainer_C::SavePhysics() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_BagContainer.BP_S_BagContainer_C.SavePhysics"));
    struct Params_SavePhysics {
    }; // Size: 0x0
    Params_SavePhysics params{};
    ProcessEvent(func, &params);
}
void ABP_S_BagContainer_C::RestorePhysics() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_BagContainer.BP_S_BagContainer_C.RestorePhysics"));
    struct Params_RestorePhysics {
    }; // Size: 0x0
    Params_RestorePhysics params{};
    ProcessEvent(func, &params);
}
void ABP_S_BagContainer_C::ExecuteUbergraph_BP_S_BagContainer(int32_t EntryPoint) {}
void ABP_S_BagContainer_C::onBagEmpty__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_BagContainer.BP_S_BagContainer_C.onBagEmpty__DelegateSignature"));
    struct Params_onBagEmpty__DelegateSignature {
    }; // Size: 0x0
    Params_onBagEmpty__DelegateSignature params{};
    ProcessEvent(func, &params);
}
