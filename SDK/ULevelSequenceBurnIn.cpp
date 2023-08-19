#include "ALevelSequenceActor.hpp"
#include "FLevelSequencePlayerSnapshot.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "ULevelSequenceBurnIn.hpp"
#include "UObject.hpp"
#include "UUserWidget.hpp"
ULevelSequenceBurnIn* ULevelSequenceBurnIn::StaticClass() {
    static auto res = find_uobject("Class /Script/LevelSequence.LevelSequenceBurnIn");
    return (ULevelSequenceBurnIn*)res;
}
void ULevelSequenceBurnIn::SetSettings(UObject* InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceBurnIn.SetSettings"));
    struct Params_SetSettings {
        UObject* InSettings; // 0x0
    }; // Size: 0x8
    Params_SetSettings params{};
    params.InSettings = (UObject*)InSettings;
    ProcessEvent(func, &params);
}
UClass* ULevelSequenceBurnIn::GetSettingsClass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceBurnIn.GetSettingsClass"));
    struct Params_GetSettingsClass {
        UClass* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSettingsClass params{};
    ProcessEvent(func, &params);
    return (UClass*)params.ReturnValue;
}
