#include "AActor.hpp"
#include "AFlyingBroom.hpp"
#include "ARace.hpp"
#include "ARaceGate.hpp"
#include "ERaceType.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FDialogueConversationReference.hpp"
#include "FRacerTime.hpp"
#include "UFunction.hpp"
#include "UInventoryItemToolRecord.hpp"
#include "UObject.hpp"
#include "UPopupScreen.hpp"
#include "USceneComponent.hpp"
#include "USplineComponent.hpp"
bool ARace::GetRacerBestTime(FName InRacerName, bool bMissionRelevant, float& OutBestTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.GetRacerBestTime"));
    struct Params_GetRacerBestTime {
        FName InRacerName; // 0x0
        bool bMissionRelevant; // 0x8
        char pad_9[0x3];
        float OutBestTime; // 0xc
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetRacerBestTime params{};
    params.InRacerName = (FName)InRacerName;
    params.bMissionRelevant = (bool)bMissionRelevant;
    params.OutBestTime = (float)OutBestTime;
    ProcessEvent(func, &params);
    OutBestTime = params.OutBestTime;
    return (bool)params.ReturnValue;
}
void ARace::OnStoryModeSkipScreenDismissed(UPopupScreen* Popup, int32_t ConfirmationResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.OnStoryModeSkipScreenDismissed"));
    struct Params_OnStoryModeSkipScreenDismissed {
        UPopupScreen* Popup; // 0x0
        int32_t ConfirmationResult; // 0x8
    }; // Size: 0xc
    Params_OnStoryModeSkipScreenDismissed params{};
    params.Popup = (UPopupScreen*)Popup;
    params.ConfirmationResult = (int32_t)ConfirmationResult;
    ProcessEvent(func, &params);
}
ARace* ARace::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Race");
    return (ARace*)res;
}
void ARace::RaceHudDismissed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.RaceHudDismissed"));
    struct Params_RaceHudDismissed {
    }; // Size: 0x0
    Params_RaceHudDismissed params{};
    ProcessEvent(func, &params);
}
void ARace::OnRaceAbandoned() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.OnRaceAbandoned"));
    struct Params_OnRaceAbandoned {
    }; // Size: 0x0
    Params_OnRaceAbandoned params{};
    ProcessEvent(func, &params);
}
void ARace::ItemToolLoadedCallback(UInventoryItemToolRecord* ToolRecord) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.ItemToolLoadedCallback"));
    struct Params_ItemToolLoadedCallback {
        UInventoryItemToolRecord* ToolRecord; // 0x0
    }; // Size: 0x8
    Params_ItemToolLoadedCallback params{};
    params.ToolRecord = (UInventoryItemToolRecord*)ToolRecord;
    ProcessEvent(func, &params);
}
void ARace::OnRaceFinish() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.OnRaceFinish"));
    struct Params_OnRaceFinish {
    }; // Size: 0x0
    Params_OnRaceFinish params{};
    ProcessEvent(func, &params);
}
TArray<FRacerTime> ARace::GetAllRacerTimes(bool bMissionRelevant) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.GetAllRacerTimes"));
    struct Params_GetAllRacerTimes {
        bool bMissionRelevant; // 0x0
        char pad_1[0x7];
        TArray<FRacerTime> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetAllRacerTimes params{};
    params.bMissionRelevant = (bool)bMissionRelevant;
    ProcessEvent(func, &params);
    return (TArray<FRacerTime>)params.ReturnValue;
}
void ARace::OnRaceStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.OnRaceStart"));
    struct Params_OnRaceStart {
    }; // Size: 0x0
    Params_OnRaceStart params{};
    ProcessEvent(func, &params);
}
void ARace::OnEndOfRaceFTComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.OnEndOfRaceFTComplete"));
    struct Params_OnEndOfRaceFTComplete {
    }; // Size: 0x0
    Params_OnEndOfRaceFTComplete params{};
    ProcessEvent(func, &params);
}
bool ARace::IsRaceMissionActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.IsRaceMissionActive"));
    struct Params_IsRaceMissionActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsRaceMissionActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ARace::OnCollectTurboBubble(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.OnCollectTurboBubble"));
    struct Params_OnCollectTurboBubble {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_OnCollectTurboBubble params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
bool ARace::IsNewBestTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.IsNewBestTime"));
    struct Params_IsNewBestTime {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsNewBestTime params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float ARace::GetTotalRaceTime(TArray<float>& Times) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.GetTotalRaceTime"));
    struct Params_GetTotalRaceTime {
        TArray<float> Times; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetTotalRaceTime params{};
    params.Times = (TArray<float>)Times;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Times = params.Times;
    return (float)params.ReturnValue;
}
float ARace::GetTotalPenaltyTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.GetTotalPenaltyTime"));
    struct Params_GetTotalPenaltyTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTotalPenaltyTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ARace::GetTimeElapsed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.GetTimeElapsed"));
    struct Params_GetTimeElapsed {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTimeElapsed params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FString ARace::GetRaceID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.GetRaceID"));
    struct Params_GetRaceID {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetRaceID params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
AFlyingBroom* ARace::GetPlayerBroom() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.GetPlayerBroom"));
    struct Params_GetPlayerBroom {
        AFlyingBroom* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPlayerBroom params{};
    ProcessEvent(func, &params);
    return (AFlyingBroom*)params.ReturnValue;
}
int32_t ARace::GetNumberOfGates() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.GetNumberOfGates"));
    struct Params_GetNumberOfGates {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumberOfGates params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float ARace::GetGatePrevBestTime(int32_t GateNumber) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.GetGatePrevBestTime"));
    struct Params_GetGatePrevBestTime {
        int32_t GateNumber; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetGatePrevBestTime params{};
    params.GateNumber = (int32_t)GateNumber;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FName ARace::GetBestRacer_Blueprint(bool bMissionRelevant, float& OutBestTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Race.GetBestRacer_Blueprint"));
    struct Params_GetBestRacer_Blueprint {
        bool bMissionRelevant; // 0x0
        char pad_1[0x3];
        float OutBestTime; // 0x4
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetBestRacer_Blueprint params{};
    params.bMissionRelevant = (bool)bMissionRelevant;
    params.OutBestTime = (float)OutBestTime;
    ProcessEvent(func, &params);
    OutBestTime = params.OutBestTime;
    return (FName)params.ReturnValue;
}
