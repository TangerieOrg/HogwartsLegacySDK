#include "FSoftClassPath.hpp"
#include "UFunction.hpp"
#include "ULevelSequenceBurnInInitSettings.hpp"
#include "ULevelSequenceBurnInOptions.hpp"
#include "UObject.hpp"
ULevelSequenceBurnInOptions* ULevelSequenceBurnInOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/LevelSequence.LevelSequenceBurnInOptions");
    return (ULevelSequenceBurnInOptions*)res;
}
void ULevelSequenceBurnInOptions::SetBurnIn(FSoftClassPath InBurnInClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceBurnInOptions.SetBurnIn"));
    struct Params_SetBurnIn {
        FSoftClassPath InBurnInClass; // 0x0
    }; // Size: 0x18
    Params_SetBurnIn params{};
    params.InBurnInClass = (FSoftClassPath)InBurnInClass;
    ProcessEvent(func, &params);
}
