#include "AActor.hpp"
#include "ABP_FlyingBroom_Platform_C.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAkComponent.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_FlyingBroom_Platform_C::ExecuteUbergraph_BP_FlyingBroom_Platform(int32_t EntryPoint) {}
ABP_FlyingBroom_Platform_C* ABP_FlyingBroom_Platform_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/RiggedObjects/Props/FlyToTarget/Meshes/BP_FlyingBroom_Platform.BP_FlyingBroom_Platform_C");
    return (ABP_FlyingBroom_Platform_C*)res;
}
void ABP_FlyingBroom_Platform_C::NewFunction_0(UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Props/FlyToTarget/Meshes/BP_FlyingBroom_Platform.BP_FlyingBroom_Platform_C.NewFunction_0"));
    struct Params_NewFunction_0 {
        UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue; // 0x0
        UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1; // 0x8
        UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_2; // 0x10
    }; // Size: 0x18
    Params_NewFunction_0 params{};
    params.CallFunc_SpawnSystemAttached_ReturnValue = (UNiagaraComponent*)CallFunc_SpawnSystemAttached_ReturnValue;
    params.CallFunc_SpawnSystemAttached_ReturnValue_1 = (UNiagaraComponent*)CallFunc_SpawnSystemAttached_ReturnValue_1;
    params.CallFunc_SpawnSystemAttached_ReturnValue_2 = (UNiagaraComponent*)CallFunc_SpawnSystemAttached_ReturnValue_2;
    ProcessEvent(func, &params);
}
void ABP_FlyingBroom_Platform_C::BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Props/FlyToTarget/Meshes/BP_FlyingBroom_Platform.BP_FlyingBroom_Platform_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_FlyingBroom_Platform_C::UserConstructionScript0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Props/FlyToTarget/Meshes/BP_FlyingBroom_Platform.BP_FlyingBroom_Platform_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_FlyingBroom_Platform_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Props/FlyToTarget/Meshes/BP_FlyingBroom_Platform.BP_FlyingBroom_Platform_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_FlyingBroom_Platform_C::ReceiveTick0(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Props/FlyToTarget/Meshes/BP_FlyingBroom_Platform.BP_FlyingBroom_Platform_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
