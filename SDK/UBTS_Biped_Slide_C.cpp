#include "AActor.hpp"
#include "EPhysicalSurface.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTS_Biped_Slide_C.hpp"
#include "UBTService_AvaAITree_Input.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
void UBTS_Biped_Slide_C::ServiceBegin(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_Slide.BTS_Biped_Slide_C.ServiceBegin"));
    struct Params_ServiceBegin {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceBegin params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
UBTS_Biped_Slide_C* UBTS_Biped_Slide_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTS_Biped_Slide.BTS_Biped_Slide_C");
    return (UBTS_Biped_Slide_C*)res;
}
void UBTS_Biped_Slide_C::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_Slide.BTS_Biped_Slide_C.OnComponentHit"));
    struct Params_OnComponentHit {
        UPrimitiveComponent* HitComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        FVector NormalImpulse; // 0x18
        FHitResult Hit; // 0x24
    }; // Size: 0xac
    Params_OnComponentHit params{};
    params.HitComponent = (UPrimitiveComponent*)HitComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
void UBTS_Biped_Slide_C::OnLoaded_064020B847E32A364958D9B53D4D396C(UClass* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_Slide.BTS_Biped_Slide_C.OnLoaded_064020B847E32A364958D9B53D4D396C"));
    struct Params_OnLoaded_064020B847E32A364958D9B53D4D396C {
        UClass* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_064020B847E32A364958D9B53D4D396C params{};
    params.Loaded = (UClass*)Loaded;
    ProcessEvent(func, &params);
}
void UBTS_Biped_Slide_C::CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_Slide.BTS_Biped_Slide_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_Slide_C::ServiceEnd(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_Slide.BTS_Biped_Slide_C.ServiceEnd"));
    struct Params_ServiceEnd {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceEnd params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTS_Biped_Slide_C::ExecuteUbergraph_BTS_Biped_Slide(int32_t EntryPoint) {}
void UBTS_Biped_Slide_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_Slide.BTS_Biped_Slide_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
