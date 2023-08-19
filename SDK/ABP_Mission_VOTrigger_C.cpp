#include "AActor.hpp"
#include "ABP_Mission_VOTrigger_C.hpp"
#include "ABiped_Player.hpp"
#include "EMountTypes.hpp"
#include "E_Hog_CamTriggerShape\Type.hpp"
#include "FCharacterName.hpp"
#include "FDialogueConversationReference.hpp"
#include "FHitResult.hpp"
#include "FMissionID.hpp"
#include "FMissionName.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAvaAudioDialogueEvent.hpp"
#include "UBoxComponent.hpp"
#include "UCreature_MountComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UObjectStateInfo.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTextRenderComponent.hpp"
ABP_Mission_VOTrigger_C* ABP_Mission_VOTrigger_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Blueprints/Missions/BP_Mission_VOTrigger.BP_Mission_VOTrigger_C");
    return (ABP_Mission_VOTrigger_C*)res;
}
void ABP_Mission_VOTrigger_C::PlayVO() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/Missions/BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.PlayVO"));
    struct Params_PlayVO {
    }; // Size: 0x0
    Params_PlayVO params{};
    ProcessEvent(func, &params);
}
void ABP_Mission_VOTrigger_C::CorrectTimeString(FString TimeString, FString& CorrectedTimeString, FString CallFunc_Left_ReturnValue, FString CallFunc_Right_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Left_ReturnValue_1, int32_t CallFunc_Len_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Right_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/Missions/BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.CorrectTimeString"));
    struct Params_CorrectTimeString {
        FString TimeString; // 0x0
        FString CorrectedTimeString; // 0x10
        FString CallFunc_Left_ReturnValue; // 0x20
        FString CallFunc_Right_ReturnValue; // 0x30
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x40
        FString CallFunc_Left_ReturnValue_1; // 0x50
        int32_t CallFunc_Len_ReturnValue; // 0x60
        char pad_64[0x4];
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x68
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x78
        char pad_79[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x80
        bool CallFunc_Less_IntInt_ReturnValue; // 0x90
        char pad_91[0x7];
        FString CallFunc_Right_ReturnValue_1; // 0x98
        FString CallFunc_Concat_StrStr_ReturnValue_3; // 0xa8
    }; // Size: 0xb8
    Params_CorrectTimeString params{};
    params.TimeString = (FString)TimeString;
    params.CorrectedTimeString = (FString)CorrectedTimeString;
    params.CallFunc_Left_ReturnValue = (FString)CallFunc_Left_ReturnValue;
    params.CallFunc_Right_ReturnValue = (FString)CallFunc_Right_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Left_ReturnValue_1 = (FString)CallFunc_Left_ReturnValue_1;
    params.CallFunc_Len_ReturnValue = (int32_t)CallFunc_Len_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Right_ReturnValue_1 = (FString)CallFunc_Right_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_3 = (FString)CallFunc_Concat_StrStr_ReturnValue_3;
    ProcessEvent(func, &params);
    CorrectedTimeString = params.CorrectedTimeString;
}
void ABP_Mission_VOTrigger_C::GetTimeStringValid(FString TimeString, bool& Valid, bool CallFunc_Contains_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/Missions/BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.GetTimeStringValid"));
    struct Params_GetTimeStringValid {
        FString TimeString; // 0x0
        bool Valid; // 0x10
        bool CallFunc_Contains_ReturnValue; // 0x11
    }; // Size: 0x12
    Params_GetTimeStringValid params{};
    params.TimeString = (FString)TimeString;
    params.Valid = (bool)Valid;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    ProcessEvent(func, &params);
    Valid = params.Valid;
}
void ABP_Mission_VOTrigger_C::ValidateTimeStrings(FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_CorrectTimeString_CorrectedTimeString, FString CallFunc_CorrectTimeString_CorrectedTimeString_1, bool CallFunc_GetTimeStringValid_Valid, bool CallFunc_GetTimeStringValid_Valid_1, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/Missions/BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.ValidateTimeStrings"));
    struct Params_ValidateTimeStrings {
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x0
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x10
        FString CallFunc_CorrectTimeString_CorrectedTimeString; // 0x20
        FString CallFunc_CorrectTimeString_CorrectedTimeString_1; // 0x30
        bool CallFunc_GetTimeStringValid_Valid; // 0x40
        bool CallFunc_GetTimeStringValid_Valid_1; // 0x41
        bool CallFunc_IsEmpty_ReturnValue; // 0x42
        bool CallFunc_IsEmpty_ReturnValue_1; // 0x43
        bool CallFunc_BooleanOR_ReturnValue; // 0x44
    }; // Size: 0x45
    Params_ValidateTimeStrings params{};
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_CorrectTimeString_CorrectedTimeString = (FString)CallFunc_CorrectTimeString_CorrectedTimeString;
    params.CallFunc_CorrectTimeString_CorrectedTimeString_1 = (FString)CallFunc_CorrectTimeString_CorrectedTimeString_1;
    params.CallFunc_GetTimeStringValid_Valid = (bool)CallFunc_GetTimeStringValid_Valid;
    params.CallFunc_GetTimeStringValid_Valid_1 = (bool)CallFunc_GetTimeStringValid_Valid_1;
    params.CallFunc_IsEmpty_ReturnValue = (bool)CallFunc_IsEmpty_ReturnValue;
    params.CallFunc_IsEmpty_ReturnValue_1 = (bool)CallFunc_IsEmpty_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_Mission_VOTrigger_C::DialogComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/Missions/BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.DialogComplete"));
    struct Params_DialogComplete {
    }; // Size: 0x0
    Params_DialogComplete params{};
    ProcessEvent(func, &params);
}
void ABP_Mission_VOTrigger_C::UpdateIsPlayerInTrigger(bool CallFunc_BooleanOR_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UCreature_MountComponent* CallFunc_GetMount_ReturnValue, bool CallFunc_IsOverlappingActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsOverlappingActor_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/Missions/BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.UpdateIsPlayerInTrigger"));
    struct Params_UpdateIsPlayerInTrigger {
        bool CallFunc_BooleanOR_ReturnValue; // 0x0
        char pad_1[0x7];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        UCreature_MountComponent* CallFunc_GetMount_ReturnValue; // 0x10
        bool CallFunc_IsOverlappingActor_ReturnValue; // 0x18
        bool CallFunc_IsValid_ReturnValue; // 0x19
        bool CallFunc_IsOverlappingActor_ReturnValue_1; // 0x1a
    }; // Size: 0x1b
    Params_UpdateIsPlayerInTrigger params{};
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetMount_ReturnValue = (UCreature_MountComponent*)CallFunc_GetMount_ReturnValue;
    params.CallFunc_IsOverlappingActor_ReturnValue = (bool)CallFunc_IsOverlappingActor_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsOverlappingActor_ReturnValue_1 = (bool)CallFunc_IsOverlappingActor_ReturnValue_1;
    ProcessEvent(func, &params);
}
void ABP_Mission_VOTrigger_C::UserConstructionScript0(bool CallFunc_SetStaticMesh_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_4) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/Missions/BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x0
        bool K2Node_SwitchEnum_CmpSuccess; // 0x1
        bool CallFunc_SetStaticMesh_ReturnValue_1; // 0x2
        bool CallFunc_SetStaticMesh_ReturnValue_2; // 0x3
        bool CallFunc_SetStaticMesh_ReturnValue_3; // 0x4
        bool CallFunc_SetStaticMesh_ReturnValue_4; // 0x5
    }; // Size: 0x6
    Params_UserConstructionScript params{};
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_SetStaticMesh_ReturnValue_1 = (bool)CallFunc_SetStaticMesh_ReturnValue_1;
    params.CallFunc_SetStaticMesh_ReturnValue_2 = (bool)CallFunc_SetStaticMesh_ReturnValue_2;
    params.CallFunc_SetStaticMesh_ReturnValue_3 = (bool)CallFunc_SetStaticMesh_ReturnValue_3;
    params.CallFunc_SetStaticMesh_ReturnValue_4 = (bool)CallFunc_SetStaticMesh_ReturnValue_4;
    ProcessEvent(func, &params);
}
void ABP_Mission_VOTrigger_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/Missions/BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_Mission_VOTrigger_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/Missions/BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ABP_Mission_VOTrigger_C::PlayVORepeat() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/Missions/BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.PlayVORepeat"));
    struct Params_PlayVORepeat {
    }; // Size: 0x0
    Params_PlayVORepeat params{};
    ProcessEvent(func, &params);
}
void ABP_Mission_VOTrigger_C::MEPWaitComplete(UObject* Caller, FMissionID& MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/Missions/BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.MEPWaitComplete"));
    struct Params_MEPWaitComplete {
        UObject* Caller; // 0x0
        FMissionID MissionID; // 0x8
    }; // Size: 0x10
    Params_MEPWaitComplete params{};
    params.Caller = (UObject*)Caller;
    params.MissionID = (FMissionID)MissionID;
    ProcessEvent(func, &params);
    MissionID = params.MissionID;
}
void ABP_Mission_VOTrigger_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/Missions/BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Mission_VOTrigger_C::WhoIsHere() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/Missions/BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.WhoIsHere"));
    struct Params_WhoIsHere {
    }; // Size: 0x0
    Params_WhoIsHere params{};
    ProcessEvent(func, &params);
}
void ABP_Mission_VOTrigger_C::SwitchOn(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/Missions/BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.SwitchOn"));
    struct Params_SwitchOn {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOn params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
void ABP_Mission_VOTrigger_C::SwitchOff(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/Missions/BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.SwitchOff"));
    struct Params_SwitchOff {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOff params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
void ABP_Mission_VOTrigger_C::RegisterMEPWait(bool Register) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/Missions/BP_Mission_VOTrigger.BP_Mission_VOTrigger_C.RegisterMEPWait"));
    struct Params_RegisterMEPWait {
        bool Register; // 0x0
    }; // Size: 0x1
    Params_RegisterMEPWait params{};
    params.Register = (bool)Register;
    ProcessEvent(func, &params);
}
void ABP_Mission_VOTrigger_C::ExecuteUbergraph_BP_Mission_VOTrigger(int32_t EntryPoint, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue) {}
