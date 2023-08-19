#include "AActor.hpp"
#include "ABP_Frontend_HogsHead_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
ABP_Frontend_HogsHead_C* ABP_Frontend_HogsHead_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/UI/Frontend/BP_Frontend_HogsHead.BP_Frontend_HogsHead_C");
    return (ABP_Frontend_HogsHead_C*)res;
}
void ABP_Frontend_HogsHead_C::ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend/BP_Frontend_HogsHead.BP_Frontend_HogsHead_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_Frontend_HogsHead_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend/BP_Frontend_HogsHead.BP_Frontend_HogsHead_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Frontend_HogsHead_C::ExecuteUbergraph_BP_Frontend_HogsHead(int32_t EntryPoint, EEndPlayReason::Type K2Node_Event_EndPlayReason, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
