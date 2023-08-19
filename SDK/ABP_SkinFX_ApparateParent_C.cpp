#include "AActor.hpp"
#include "ABP_SkinFX_ApparateParent_C.hpp"
#include "ABP_SkinFX_Graph_Parent_C.hpp"
#include "ESkinFXEffectEndStyle.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "UObjectStateInfo.hpp"
#include "UParticleSystemComponent.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTimelineComponent.hpp"
void ABP_SkinFX_ApparateParent_C::SkinFXNotifyEnd(ESkinFXEffectEndStyle EndStyle, float CurrentTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.SkinFXNotifyEnd"));
    struct Params_SkinFXNotifyEnd {
        ESkinFXEffectEndStyle EndStyle; // 0x0
        char pad_1[0x3];
        float CurrentTime; // 0x4
    }; // Size: 0x8
    Params_SkinFXNotifyEnd params{};
    params.EndStyle = (ESkinFXEffectEndStyle)EndStyle;
    params.CurrentTime = (float)CurrentTime;
    ProcessEvent(func, &params);
}
void ABP_SkinFX_ApparateParent_C::Dissapear__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.Dissapear__FinishedFunc"));
    struct Params_Dissapear__FinishedFunc {
    }; // Size: 0x0
    Params_Dissapear__FinishedFunc params{};
    ProcessEvent(func, &params);
}
ABP_SkinFX_ApparateParent_C* ABP_SkinFX_ApparateParent_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C");
    return (ABP_SkinFX_ApparateParent_C*)res;
}
void ABP_SkinFX_ApparateParent_C::GetActorBoundsComponent(USceneComponent*& ActorComponent, AActor* CallFunc_SkinFXGetAffectedActor_AffectedActor, UCapsuleComponent* CallFunc_GetComponentByClass_ReturnValue, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, UStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsAHouseElf_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.GetActorBoundsComponent"));
    struct Params_GetActorBoundsComponent {
        USceneComponent* ActorComponent; // 0x0
        AActor* CallFunc_SkinFXGetAffectedActor_AffectedActor; // 0x8
        UCapsuleComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x10
        USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue; // 0x18
        bool CallFunc_IsValid_ReturnValue; // 0x20
        char pad_21[0x7];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x28
        UStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x30
        bool CallFunc_IsAHouseElf_ReturnValue; // 0x38
        bool CallFunc_IsValid_ReturnValue_1; // 0x39
        char pad_3a[0x6];
        USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_2; // 0x40
        bool CallFunc_IsValid_ReturnValue_2; // 0x48
    }; // Size: 0x49
    Params_GetActorBoundsComponent params{};
    params.ActorComponent = (USceneComponent*)ActorComponent;
    params.CallFunc_SkinFXGetAffectedActor_AffectedActor = (AActor*)CallFunc_SkinFXGetAffectedActor_AffectedActor;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCapsuleComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_K2_GetRootComponent_ReturnValue = (USceneComponent*)CallFunc_K2_GetRootComponent_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (UStaticMeshComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    params.CallFunc_IsAHouseElf_ReturnValue = (bool)CallFunc_IsAHouseElf_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetComponentByClass_ReturnValue_2 = (USkeletalMeshComponent*)CallFunc_GetComponentByClass_ReturnValue_2;
    params.CallFunc_IsValid_ReturnValue_2 = (bool)CallFunc_IsValid_ReturnValue_2;
    ProcessEvent(func, &params);
    ActorComponent = params.ActorComponent;
}
void ABP_SkinFX_ApparateParent_C::Dissapear__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.Dissapear__UpdateFunc"));
    struct Params_Dissapear__UpdateFunc {
    }; // Size: 0x0
    Params_Dissapear__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_ApparateParent_C::SkinFXInitialUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.SkinFXInitialUpdate"));
    struct Params_SkinFXInitialUpdate {
    }; // Size: 0x0
    Params_SkinFXInitialUpdate params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_ApparateParent_C::Appear__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.Appear__FinishedFunc"));
    struct Params_Appear__FinishedFunc {
    }; // Size: 0x0
    Params_Appear__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_ApparateParent_C::Disapparate() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.Disapparate"));
    struct Params_Disapparate {
    }; // Size: 0x0
    Params_Disapparate params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_ApparateParent_C::Appear__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.Appear__UpdateFunc"));
    struct Params_Appear__UpdateFunc {
    }; // Size: 0x0
    Params_Appear__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_ApparateParent_C::SkinFXUpdateTick(float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.SkinFXUpdateTick"));
    struct Params_SkinFXUpdateTick {
        float DeltaTime; // 0x0
    }; // Size: 0x4
    Params_SkinFXUpdateTick params{};
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
}
void ABP_SkinFX_ApparateParent_C::Apparate() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.Apparate"));
    struct Params_Apparate {
    }; // Size: 0x0
    Params_Apparate params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_ApparateParent_C::Initialise() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.Initialise"));
    struct Params_Initialise {
    }; // Size: 0x0
    Params_Initialise params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_ApparateParent_C::OnApparateFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.OnApparateFinished"));
    struct Params_OnApparateFinished {
    }; // Size: 0x0
    Params_OnApparateFinished params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_ApparateParent_C::OnDisapparateFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/SkinFX/BP_SkinFX_ApparateParent.BP_SkinFX_ApparateParent_C.OnDisapparateFinished"));
    struct Params_OnDisapparateFinished {
    }; // Size: 0x0
    Params_OnDisapparateFinished params{};
    ProcessEvent(func, &params);
}
void ABP_SkinFX_ApparateParent_C::ExecuteUbergraph_BP_SkinFX_ApparateParent(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
