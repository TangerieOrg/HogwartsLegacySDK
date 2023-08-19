#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FDialogueDataTableHandles.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_AvatarCreatorGlassesItem.hpp"
class UUI_BP_AvatarCreator_C;
class UDataTable;
class ACineCameraActor;
class AUI_BP_DummyActor_C;
class UObject;
class AActor;
#pragma pack(push, 1)
class AIntro_AvatarCreator_Studio_C : public ALevelScriptActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    FDialogueDataTableHandles PlayerMaleFemaleDialogueDataTableForceLoadHandles; // 0x258
    float MinCurtainTime; // 0x268
    bool CurtainLowered; // 0x26c
    bool TimerExpired; // 0x26d
    bool AvatarUIReady; // 0x26e
    char pad_26f[0x1];
    float ShowLoadScreenTime; // 0x270
    char pad_274[0x4];
    UUI_BP_AvatarCreator_C* AvatarCreatorUI; // 0x278
    UDataTable* GlassesDataTable; // 0x280
    ACineCameraActor* BodyCam_ExecuteUbergraph_Intro_AvatarCreator_Studio_RefProperty; // 0x288
    ACineCameraActor* HeadCam_ExecuteUbergraph_Intro_AvatarCreator_Studio_RefProperty; // 0x290
    AUI_BP_DummyActor_C* Player0_ExecuteUbergraph_Intro_AvatarCreator_Studio_RefProperty; // 0x298
    ACineCameraActor* LetterCam_ExecuteUbergraph_Intro_AvatarCreator_Studio_RefProperty; // 0x2a0
    static AIntro_AvatarCreator_Studio_C* StaticClass();
    void GetAvatarCreatorGlassesGearAppearanceIDs(TArray<FName>& OutGearAppearanceIds, TArray<FName> GearAppearanceIDs, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32_t CallFunc_Array_Length_ReturnValue, FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FSTR_AvatarCreatorGlassesItem CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue);
    void UnloadSublevels();
    void LoadIntroRoot();
    void LoadSublevels();
    void Complete_CFE4BD844A254A5100AA1B938D237B47();
    void CurtainRaised_63EFFFFB4C4496EB09C8CB84C4D01F71();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void OnAllAvatarPresetsLoaded();
    void FrontendCameraChange(UObject* Caller, int32_t int);
    void AvatarCreatorReady();
    void GotoAvatarUIifReady();
    void CurtainTimer();
    void ShowLoadScreen();
    void ExecuteUbergraph_Intro_AvatarCreator_Studio(int32_t EntryPoint, TArray<FName>& CallFunc_GetAvatarCreatorGlassesGearAppearanceIDs_OutGearAppearanceIds, int32_t Temp_int_Variable, AActor* Temp_object_Variable);
}; // Size: 0x2a8
#pragma pack(pop)
