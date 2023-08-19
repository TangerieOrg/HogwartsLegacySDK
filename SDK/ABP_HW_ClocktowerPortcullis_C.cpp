#include "ABP_HW_ClocktowerPortcullis_C.hpp"
#include "ABP_Portcullis_Base_C.hpp"
#include "FLockManagerLock.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UStaticMeshComponent.hpp"
ABP_HW_ClocktowerPortcullis_C* ABP_HW_ClocktowerPortcullis_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_HW_ClocktowerPortcullis.BP_HW_ClocktowerPortcullis_C");
    return (ABP_HW_ClocktowerPortcullis_C*)res;
}
void ABP_HW_ClocktowerPortcullis_C::LockChanged(UObject* Caller, FLockManagerLock& Lock) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_HW_ClocktowerPortcullis.BP_HW_ClocktowerPortcullis_C.LockChanged"));
    struct Params_LockChanged {
        UObject* Caller; // 0x0
        FLockManagerLock Lock; // 0x8
    }; // Size: 0x14
    Params_LockChanged params{};
    params.Caller = (UObject*)Caller;
    params.Lock = (FLockManagerLock)Lock;
    ProcessEvent(func, &params);
    Lock = params.Lock;
}
void ABP_HW_ClocktowerPortcullis_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_HW_ClocktowerPortcullis.BP_HW_ClocktowerPortcullis_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_HW_ClocktowerPortcullis_C::ExecuteUbergraph_BP_HW_ClocktowerPortcullis(int32_t EntryPoint) {}
