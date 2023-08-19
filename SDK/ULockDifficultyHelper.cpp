#include "EDoorLockLevel.hpp"
#include "ELockDifficulty.hpp"
#include "UFunction.hpp"
#include "ULockDifficultyHelper.hpp"
#include "UObject.hpp"
ULockDifficultyHelper* ULockDifficultyHelper::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LockDifficultyHelper");
    return (ULockDifficultyHelper*)res;
}
ELockDifficulty ULockDifficultyHelper::ConvertLockLevelToLockDifficulty(EDoorLockLevel LockLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockDifficultyHelper.ConvertLockLevelToLockDifficulty"));
    struct Params_ConvertLockLevelToLockDifficulty {
        EDoorLockLevel LockLevel; // 0x0
        ELockDifficulty ReturnValue; // 0x1
    }; // Size: 0x2
    Params_ConvertLockLevelToLockDifficulty params{};
    params.LockLevel = (EDoorLockLevel)LockLevel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ELockDifficulty)params.ReturnValue;
}
EDoorLockLevel ULockDifficultyHelper::ConvertLockDifficultyToLockLevel(ELockDifficulty LockDifficulty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LockDifficultyHelper.ConvertLockDifficultyToLockLevel"));
    struct Params_ConvertLockDifficultyToLockLevel {
        ELockDifficulty LockDifficulty; // 0x0
        EDoorLockLevel ReturnValue; // 0x1
    }; // Size: 0x2
    Params_ConvertLockDifficultyToLockLevel params{};
    params.LockDifficulty = (ELockDifficulty)LockDifficulty;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EDoorLockLevel)params.ReturnValue;
}
