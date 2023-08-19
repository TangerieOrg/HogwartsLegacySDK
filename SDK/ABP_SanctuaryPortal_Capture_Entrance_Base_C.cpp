#include "ABP_SanctuaryPortal_Capture_Entrance_Base_C.hpp"
#include "ASanctuaryPortalCaptureEntrance.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void ABP_SanctuaryPortal_Capture_Entrance_Base_C::BiomeEntryAboutToRevokeControl(UObject* Caller, FName& String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Sanctuary/Blueprints/SanctuaryPortals/BP_SanctuaryPortal_Capture_Entrance_Base.BP_SanctuaryPortal_Capture_Entrance_Base_C.BiomeEntryAboutToRevokeControl"));
    struct Params_BiomeEntryAboutToRevokeControl {
        UObject* Caller; // 0x0
        FName String; // 0x8
    }; // Size: 0x10
    Params_BiomeEntryAboutToRevokeControl params{};
    params.Caller = (UObject*)Caller;
    params.String = (FName)String;
    ProcessEvent(func, &params);
    String = params.String;
}
ABP_SanctuaryPortal_Capture_Entrance_Base_C* ABP_SanctuaryPortal_Capture_Entrance_Base_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Sanctuary/Blueprints/SanctuaryPortals/BP_SanctuaryPortal_Capture_Entrance_Base.BP_SanctuaryPortal_Capture_Entrance_Base_C");
    return (ABP_SanctuaryPortal_Capture_Entrance_Base_C*)res;
}
void ABP_SanctuaryPortal_Capture_Entrance_Base_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Sanctuary/Blueprints/SanctuaryPortals/BP_SanctuaryPortal_Capture_Entrance_Base.BP_SanctuaryPortal_Capture_Entrance_Base_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_SanctuaryPortal_Capture_Entrance_Base_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Sanctuary/Blueprints/SanctuaryPortals/BP_SanctuaryPortal_Capture_Entrance_Base.BP_SanctuaryPortal_Capture_Entrance_Base_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_SanctuaryPortal_Capture_Entrance_Base_C::ExecuteUbergraph_BP_SanctuaryPortal_Capture_Entrance_Base(int32_t EntryPoint) {}
