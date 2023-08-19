#include "AActor.hpp"
#include "ACineCameraActor.hpp"
#include "AIntro_AvatarCreator_Studio_C.hpp"
#include "ALevelScriptActor.hpp"
#include "AUI_BP_DummyActor_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FDialogueDataTableHandles.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_AvatarCreatorGlassesItem.hpp"
#include "UDataTable.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UUI_BP_AvatarCreator_C.hpp"
AIntro_AvatarCreator_Studio_C* AIntro_AvatarCreator_Studio_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/UI/Intro_AvatarCreator_Studio_LevelInstance_3.Intro_AvatarCreator_Studio_C");
    return (AIntro_AvatarCreator_Studio_C*)res;
}
void AIntro_AvatarCreator_Studio_C::LoadIntroRoot() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Intro_AvatarCreator_Studio_LevelInstance_3.Intro_AvatarCreator_Studio_C.LoadIntroRoot"));
    struct Params_LoadIntroRoot {
    }; // Size: 0x0
    Params_LoadIntroRoot params{};
    ProcessEvent(func, &params);
}
void AIntro_AvatarCreator_Studio_C::GetAvatarCreatorGlassesGearAppearanceIDs(TArray<FName>& OutGearAppearanceIds, TArray<FName> GearAppearanceIDs, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32_t CallFunc_Array_Length_ReturnValue, FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FSTR_AvatarCreatorGlassesItem CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Intro_AvatarCreator_Studio_LevelInstance_3.Intro_AvatarCreator_Studio_C.GetAvatarCreatorGlassesGearAppearanceIDs"));
    struct Params_GetAvatarCreatorGlassesGearAppearanceIDs {
        TArray<FName> OutGearAppearanceIds; // 0x0
        TArray<FName> GearAppearanceIDs; // 0x10
        int32_t Temp_int_Array_Index_Variable; // 0x20
        int32_t Temp_int_Loop_Counter_Variable; // 0x24
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x28
        char pad_2c[0x4];
        TArray<FName> CallFunc_GetDataTableRowNames_OutRowNames; // 0x30
        int32_t CallFunc_Array_Length_ReturnValue; // 0x40
        FName CallFunc_Array_Get_Item; // 0x44
        bool CallFunc_Less_IntInt_ReturnValue; // 0x4c
        char pad_4d[0x3];
        FSTR_AvatarCreatorGlassesItem CallFunc_GetDataTableRowFromName_OutRow; // 0x50
        bool CallFunc_GetDataTableRowFromName_ReturnValue; // 0x58
        char pad_59[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0x5c
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x60
    }; // Size: 0x61
    Params_GetAvatarCreatorGlassesGearAppearanceIDs params{};
    params.OutGearAppearanceIds = (TArray<FName>)OutGearAppearanceIds;
    params.GearAppearanceIDs = (TArray<FName>)GearAppearanceIDs;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetDataTableRowNames_OutRowNames = (TArray<FName>)CallFunc_GetDataTableRowNames_OutRowNames;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_GetDataTableRowFromName_OutRow = (FSTR_AvatarCreatorGlassesItem)CallFunc_GetDataTableRowFromName_OutRow;
    params.CallFunc_GetDataTableRowFromName_ReturnValue = (bool)CallFunc_GetDataTableRowFromName_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    ProcessEvent(func, &params);
    OutGearAppearanceIds = params.OutGearAppearanceIds;
    CallFunc_GetDataTableRowNames_OutRowNames = params.CallFunc_GetDataTableRowNames_OutRowNames;
}
void AIntro_AvatarCreator_Studio_C::UnloadSublevels() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Intro_AvatarCreator_Studio_LevelInstance_3.Intro_AvatarCreator_Studio_C.UnloadSublevels"));
    struct Params_UnloadSublevels {
    }; // Size: 0x0
    Params_UnloadSublevels params{};
    ProcessEvent(func, &params);
}
void AIntro_AvatarCreator_Studio_C::Complete_CFE4BD844A254A5100AA1B938D237B47() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Intro_AvatarCreator_Studio_LevelInstance_3.Intro_AvatarCreator_Studio_C.Complete_CFE4BD844A254A5100AA1B938D237B47"));
    struct Params_Complete_CFE4BD844A254A5100AA1B938D237B47 {
    }; // Size: 0x0
    Params_Complete_CFE4BD844A254A5100AA1B938D237B47 params{};
    ProcessEvent(func, &params);
}
void AIntro_AvatarCreator_Studio_C::LoadSublevels() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Intro_AvatarCreator_Studio_LevelInstance_3.Intro_AvatarCreator_Studio_C.LoadSublevels"));
    struct Params_LoadSublevels {
    }; // Size: 0x0
    Params_LoadSublevels params{};
    ProcessEvent(func, &params);
}
void AIntro_AvatarCreator_Studio_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Intro_AvatarCreator_Studio_LevelInstance_3.Intro_AvatarCreator_Studio_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void AIntro_AvatarCreator_Studio_C::CurtainRaised_63EFFFFB4C4496EB09C8CB84C4D01F71() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Intro_AvatarCreator_Studio_LevelInstance_3.Intro_AvatarCreator_Studio_C.CurtainRaised_63EFFFFB4C4496EB09C8CB84C4D01F71"));
    struct Params_CurtainRaised_63EFFFFB4C4496EB09C8CB84C4D01F71 {
    }; // Size: 0x0
    Params_CurtainRaised_63EFFFFB4C4496EB09C8CB84C4D01F71 params{};
    ProcessEvent(func, &params);
}
void AIntro_AvatarCreator_Studio_C::OnAllAvatarPresetsLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Intro_AvatarCreator_Studio_LevelInstance_3.Intro_AvatarCreator_Studio_C.OnAllAvatarPresetsLoaded"));
    struct Params_OnAllAvatarPresetsLoaded {
    }; // Size: 0x0
    Params_OnAllAvatarPresetsLoaded params{};
    ProcessEvent(func, &params);
}
void AIntro_AvatarCreator_Studio_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Intro_AvatarCreator_Studio_LevelInstance_3.Intro_AvatarCreator_Studio_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AIntro_AvatarCreator_Studio_C::FrontendCameraChange(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Intro_AvatarCreator_Studio_LevelInstance_3.Intro_AvatarCreator_Studio_C.FrontendCameraChange"));
    struct Params_FrontendCameraChange {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_FrontendCameraChange params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void AIntro_AvatarCreator_Studio_C::AvatarCreatorReady() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Intro_AvatarCreator_Studio_LevelInstance_3.Intro_AvatarCreator_Studio_C.AvatarCreatorReady"));
    struct Params_AvatarCreatorReady {
    }; // Size: 0x0
    Params_AvatarCreatorReady params{};
    ProcessEvent(func, &params);
}
void AIntro_AvatarCreator_Studio_C::GotoAvatarUIifReady() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Intro_AvatarCreator_Studio_LevelInstance_3.Intro_AvatarCreator_Studio_C.GotoAvatarUIifReady"));
    struct Params_GotoAvatarUIifReady {
    }; // Size: 0x0
    Params_GotoAvatarUIifReady params{};
    ProcessEvent(func, &params);
}
void AIntro_AvatarCreator_Studio_C::CurtainTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Intro_AvatarCreator_Studio_LevelInstance_3.Intro_AvatarCreator_Studio_C.CurtainTimer"));
    struct Params_CurtainTimer {
    }; // Size: 0x0
    Params_CurtainTimer params{};
    ProcessEvent(func, &params);
}
void AIntro_AvatarCreator_Studio_C::ShowLoadScreen() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Intro_AvatarCreator_Studio_LevelInstance_3.Intro_AvatarCreator_Studio_C.ShowLoadScreen"));
    struct Params_ShowLoadScreen {
    }; // Size: 0x0
    Params_ShowLoadScreen params{};
    ProcessEvent(func, &params);
}
void AIntro_AvatarCreator_Studio_C::ExecuteUbergraph_Intro_AvatarCreator_Studio(int32_t EntryPoint, TArray<FName>& CallFunc_GetAvatarCreatorGlassesGearAppearanceIDs_OutGearAppearanceIds, int32_t Temp_int_Variable, AActor* Temp_object_Variable) {}
