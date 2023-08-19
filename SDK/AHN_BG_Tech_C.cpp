#include "AAIPath.hpp"
#include "AActor.hpp"
#include "ABP_Sphinx_Puzzle_B_Brazier_C.hpp"
#include "ABP_Station_CustomGardenPlow_1p_C.hpp"
#include "AHN_BG_Tech_C.hpp"
#include "ALevelScriptActor.hpp"
#include "ASceneRigActor.hpp"
#include "AmbientChatterTopicIDs.hpp"
#include "FLockManagerLock.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void AHN_BG_Tech_C::Brazier_Restart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/SubLevels/HN_BG_Tech.HN_BG_Tech_C.Brazier_Restart"));
    struct Params_Brazier_Restart {
    }; // Size: 0x0
    Params_Brazier_Restart params{};
    ProcessEvent(func, &params);
}
AHN_BG_Tech_C* AHN_BG_Tech_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/HN_BG_Tech.HN_BG_Tech_C");
    return (AHN_BG_Tech_C*)res;
}
void AHN_BG_Tech_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/SubLevels/HN_BG_Tech.HN_BG_Tech_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AHN_BG_Tech_C::BndEvt__HN_BG_Tech_Chatter_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/SubLevels/HN_BG_Tech.HN_BG_Tech_C.BndEvt__HN_BG_Tech_Chatter_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__HN_BG_Tech_Chatter_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_BndEvt__HN_BG_Tech_Chatter_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void AHN_BG_Tech_C::Gazebo_Activated() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/SubLevels/HN_BG_Tech.HN_BG_Tech_C.Gazebo_Activated"));
    struct Params_Gazebo_Activated {
    }; // Size: 0x0
    Params_Gazebo_Activated params{};
    ProcessEvent(func, &params);
}
void AHN_BG_Tech_C::Brazier_Lit() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/SubLevels/HN_BG_Tech.HN_BG_Tech_C.Brazier_Lit"));
    struct Params_Brazier_Lit {
    }; // Size: 0x0
    Params_Brazier_Lit params{};
    ProcessEvent(func, &params);
}
void AHN_BG_Tech_C::MRT_01_CP2a_Updated(UObject* Caller, FName& String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/SubLevels/HN_BG_Tech.HN_BG_Tech_C.MRT_01_CP2a_Updated"));
    struct Params_MRT_01_CP2a_Updated {
        UObject* Caller; // 0x0
        FName String; // 0x8
    }; // Size: 0x10
    Params_MRT_01_CP2a_Updated params{};
    params.Caller = (UObject*)Caller;
    params.String = (FName)String;
    ProcessEvent(func, &params);
    String = params.String;
}
void AHN_BG_Tech_C::IncendioHint_VO() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/SubLevels/HN_BG_Tech.HN_BG_Tech_C.IncendioHint_VO"));
    struct Params_IncendioHint_VO {
    }; // Size: 0x0
    Params_IncendioHint_VO params{};
    ProcessEvent(func, &params);
}
void AHN_BG_Tech_C::BndEvt__HN_BG_Tech_Chatter_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/SubLevels/HN_BG_Tech.HN_BG_Tech_C.BndEvt__HN_BG_Tech_Chatter_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__HN_BG_Tech_Chatter_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_BndEvt__HN_BG_Tech_Chatter_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void AHN_BG_Tech_C::NoraVO_Gazebo() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/SubLevels/HN_BG_Tech.HN_BG_Tech_C.NoraVO_Gazebo"));
    struct Params_NoraVO_Gazebo {
    }; // Size: 0x0
    Params_NoraVO_Gazebo params{};
    ProcessEvent(func, &params);
}
void AHN_BG_Tech_C::LockChanged(UObject* Caller, FLockManagerLock& Lock) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/SubLevels/HN_BG_Tech.HN_BG_Tech_C.LockChanged"));
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
void AHN_BG_Tech_C::ExecuteUbergraph_HN_BG_Tech(int32_t EntryPoint, FName CallFunc_GetStatName_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable) {}
