#include "AActor.hpp"
#include "ABP_Merlin_Gazebo_C.hpp"
#include "APhoenixBudgetedActor.hpp"
#include "ASceneRigActor.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FSceneRigParameters.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBoxComponent.hpp"
#include "UCapsuleComponent.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "ULocalStencilBoundsHintComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "UObject.hpp"
#include "UObjectStateComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USceneRig.hpp"
#include "USceneRig_Interaction.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USphereComponent.hpp"
void ABP_Merlin_Gazebo_C::InteractionInitiated(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.InteractionInitiated"));
    struct Params_InteractionInitiated {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_InteractionInitiated params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
ABP_Merlin_Gazebo_C* ABP_Merlin_Gazebo_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/BP_Merlin_Gazebo.BP_Merlin_Gazebo_C");
    return (ABP_Merlin_Gazebo_C*)res;
}
void ABP_Merlin_Gazebo_C::CollisionRise2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.CollisionRise2"));
    struct Params_CollisionRise2 {
    }; // Size: 0x0
    Params_CollisionRise2 params{};
    ProcessEvent(func, &params);
}
void ABP_Merlin_Gazebo_C::PlayFinishedScenerig(FSceneRigParameters CallFunc_CreateDefaultParameters_Parameters, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_ComposeRotators_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue) {}
void ABP_Merlin_Gazebo_C::PlayActivationSceneRig() {}
void ABP_Merlin_Gazebo_C::Inactive() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.Inactive"));
    struct Params_Inactive {
    }; // Size: 0x0
    Params_Inactive params{};
    ProcessEvent(func, &params);
}
void ABP_Merlin_Gazebo_C::CollisionRise1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.CollisionRise1"));
    struct Params_CollisionRise1 {
    }; // Size: 0x0
    Params_CollisionRise1 params{};
    ProcessEvent(func, &params);
}
void ABP_Merlin_Gazebo_C::Start(float Delay, bool bSolved) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.Start"));
    struct Params_Start {
        float Delay; // 0x0
        bool bSolved; // 0x4
    }; // Size: 0x5
    Params_Start params{};
    params.Delay = (float)Delay;
    params.bSolved = (bool)bSolved;
    ProcessEvent(func, &params);
}
void ABP_Merlin_Gazebo_C::BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_Merlin_Gazebo_C::BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ABP_Merlin_Gazebo_C::MissionUnlock() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.MissionUnlock"));
    struct Params_MissionUnlock {
    }; // Size: 0x0
    Params_MissionUnlock params{};
    ProcessEvent(func, &params);
}
void ABP_Merlin_Gazebo_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Merlin_Gazebo_C::GazeboSRFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.GazeboSRFinished"));
    struct Params_GazeboSRFinished {
    }; // Size: 0x0
    Params_GazeboSRFinished params{};
    ProcessEvent(func, &params);
}
void ABP_Merlin_Gazebo_C::GazeboRevealedAudio() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.GazeboRevealedAudio"));
    struct Params_GazeboRevealedAudio {
    }; // Size: 0x0
    Params_GazeboRevealedAudio params{};
    ProcessEvent(func, &params);
}
void ABP_Merlin_Gazebo_C::SetCollected() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.SetCollected"));
    struct Params_SetCollected {
    }; // Size: 0x0
    Params_SetCollected params{};
    ProcessEvent(func, &params);
}
void ABP_Merlin_Gazebo_C::ActivationSRFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.ActivationSRFinished"));
    struct Params_ActivationSRFinished {
    }; // Size: 0x0
    Params_ActivationSRFinished params{};
    ProcessEvent(func, &params);
}
void ABP_Merlin_Gazebo_C::CreateCollectibleLoop() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.CreateCollectibleLoop"));
    struct Params_CreateCollectibleLoop {
    }; // Size: 0x0
    Params_CreateCollectibleLoop params{};
    ProcessEvent(func, &params);
}
void ABP_Merlin_Gazebo_C::CreateCollectible() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.CreateCollectible"));
    struct Params_CreateCollectible {
    }; // Size: 0x0
    Params_CreateCollectible params{};
    ProcessEvent(func, &params);
}
void ABP_Merlin_Gazebo_C::Deactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.Deactivate"));
    struct Params_Deactivate {
    }; // Size: 0x0
    Params_Deactivate params{};
    ProcessEvent(func, &params);
}
void ABP_Merlin_Gazebo_C::ExecuteUbergraph_BP_Merlin_Gazebo(int32_t EntryPoint) {}
void ABP_Merlin_Gazebo_C::MerlinGazeboStarted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.MerlinGazeboStarted__DelegateSignature"));
    struct Params_MerlinGazeboStarted__DelegateSignature {
    }; // Size: 0x0
    Params_MerlinGazeboStarted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Merlin_Gazebo_C::Activated__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_Merlin_Gazebo.BP_Merlin_Gazebo_C.Activated__DelegateSignature"));
    struct Params_Activated__DelegateSignature {
    }; // Size: 0x0
    Params_Activated__DelegateSignature params{};
    ProcessEvent(func, &params);
}
