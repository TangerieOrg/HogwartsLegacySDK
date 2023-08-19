#include "ABP_CoinPouch_C.hpp"
#include "ABP_InventoryObject_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FVector.hpp"
#include "UBTService_AvaAITree.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
ABP_CoinPouch_C* ABP_CoinPouch_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/InventoryObjects/Blueprints/BP_CoinPouch.BP_CoinPouch_C");
    return (ABP_CoinPouch_C*)res;
}
void ABP_CoinPouch_C::UserConstructionScript(FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Blueprints/BP_CoinPouch.BP_CoinPouch_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x0
        FRandomStream CallFunc_MakeRandomStream_RandomStream; // 0xc
        int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue; // 0x14
    }; // Size: 0x18
    Params_UserConstructionScript params{};
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_MakeRandomStream_RandomStream = (FRandomStream)CallFunc_MakeRandomStream_RandomStream;
    params.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = (int32_t)CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_CoinPouch_C::Interact(UBTService_AvaAITree* AvaService) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Blueprints/BP_CoinPouch.BP_CoinPouch_C.Interact"));
    struct Params_Interact {
        UBTService_AvaAITree* AvaService; // 0x0
    }; // Size: 0x8
    Params_Interact params{};
    params.AvaService = (UBTService_AvaAITree*)AvaService;
    ProcessEvent(func, &params);
}
void ABP_CoinPouch_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Blueprints/BP_CoinPouch.BP_CoinPouch_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_CoinPouch_C::ShowNonCinematicElements(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Blueprints/BP_CoinPouch.BP_CoinPouch_C.ShowNonCinematicElements"));
    struct Params_ShowNonCinematicElements {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ShowNonCinematicElements params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_CoinPouch_C::HideNonCinematicElements(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Blueprints/BP_CoinPouch.BP_CoinPouch_C.HideNonCinematicElements"));
    struct Params_HideNonCinematicElements {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_HideNonCinematicElements params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_CoinPouch_C::ExecuteUbergraph_BP_CoinPouch(int32_t EntryPoint) {}
