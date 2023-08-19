#include "AActor.hpp"
#include "EHomeworkType.hpp"
#include "FAchievementCategory.hpp"
#include "FAchievementReward.hpp"
#include "FKnowledgeAchievementResult.hpp"
#include "UAchievementManager.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UAchievementManager::OnCurtainRaised() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.OnCurtainRaised"));
    struct Params_OnCurtainRaised {
    }; // Size: 0x0
    Params_OnCurtainRaised params{};
    ProcessEvent(func, &params);
}
void UAchievementManager::OnPreGameLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.OnPreGameLoad"));
    struct Params_OnPreGameLoad {
    }; // Size: 0x0
    Params_OnPreGameLoad params{};
    ProcessEvent(func, &params);
}
bool UAchievementManager::AnyDelayedRewards() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.AnyDelayedRewards"));
    struct Params_AnyDelayedRewards {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AnyDelayedRewards params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAchievementManager::ApplyHomework(EHomeworkType HomeworkType, FString HomeworkName, int32_t Count, bool AssertIfNotFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.ApplyHomework"));
    struct Params_ApplyHomework {
        EHomeworkType HomeworkType; // 0x0
        char pad_1[0x7];
        FString HomeworkName; // 0x8
        int32_t Count; // 0x18
        bool AssertIfNotFound; // 0x1c
    }; // Size: 0x1d
    Params_ApplyHomework params{};
    params.HomeworkType = (EHomeworkType)HomeworkType;
    params.HomeworkName = (FString)HomeworkName;
    params.Count = (int32_t)Count;
    params.AssertIfNotFound = (bool)AssertIfNotFound;
    ProcessEvent(func, &params);
}
FKnowledgeAchievementResult UAchievementManager::GetChallengeLevel(FName AchievementID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.GetChallengeLevel"));
    struct Params_GetChallengeLevel {
        FName AchievementID; // 0x0
        FKnowledgeAchievementResult ReturnValue; // 0x8
    }; // Size: 0x48
    Params_GetChallengeLevel params{};
    params.AchievementID = (FName)AchievementID;
    ProcessEvent(func, &params);
    return (FKnowledgeAchievementResult)params.ReturnValue;
}
void UAchievementManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void UAchievementManager::SetHomeworkWatcher(EHomeworkType HomeworkType, FString HomeworkName, AActor* Caller, bool bEnable, bool AssertIfNotFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.SetHomeworkWatcher"));
    struct Params_SetHomeworkWatcher {
        EHomeworkType HomeworkType; // 0x0
        char pad_1[0x7];
        FString HomeworkName; // 0x8
        AActor* Caller; // 0x18
        bool bEnable; // 0x20
        bool AssertIfNotFound; // 0x21
    }; // Size: 0x22
    Params_SetHomeworkWatcher params{};
    params.HomeworkType = (EHomeworkType)HomeworkType;
    params.HomeworkName = (FString)HomeworkName;
    params.Caller = (AActor*)Caller;
    params.bEnable = (bool)bEnable;
    params.AssertIfNotFound = (bool)AssertIfNotFound;
    ProcessEvent(func, &params);
}
UAchievementManager* UAchievementManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AchievementManager");
    return (UAchievementManager*)res;
}
bool UAchievementManager::ApplyWhitelistInstance(FName AchievementID, FName InstanceName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.ApplyWhitelistInstance"));
    struct Params_ApplyWhitelistInstance {
        FName AchievementID; // 0x0
        FName InstanceName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ApplyWhitelistInstance params{};
    params.AchievementID = (FName)AchievementID;
    params.InstanceName = (FName)InstanceName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAchievementManager::SetAchievementWatcher(FName AchievementID, AActor* Caller, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.SetAchievementWatcher"));
    struct Params_SetAchievementWatcher {
        FName AchievementID; // 0x0
        AActor* Caller; // 0x8
        bool bEnable; // 0x10
    }; // Size: 0x11
    Params_SetAchievementWatcher params{};
    params.AchievementID = (FName)AchievementID;
    params.Caller = (AActor*)Caller;
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void UAchievementManager::ResetAchievement(FName AchievementID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.ResetAchievement"));
    struct Params_ResetAchievement {
        FName AchievementID; // 0x0
    }; // Size: 0x8
    Params_ResetAchievement params{};
    params.AchievementID = (FName)AchievementID;
    ProcessEvent(func, &params);
}
void UAchievementManager::PatchLoadedGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.PatchLoadedGame"));
    struct Params_PatchLoadedGame {
    }; // Size: 0x0
    Params_PatchLoadedGame params{};
    ProcessEvent(func, &params);
}
void UAchievementManager::OnNewGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.OnNewGame"));
    struct Params_OnNewGame {
    }; // Size: 0x0
    Params_OnNewGame params{};
    ProcessEvent(func, &params);
}
void UAchievementManager::DebugAchievementIncrease(FString AchievementID, int32_t Amount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.DebugAchievementIncrease"));
    struct Params_DebugAchievementIncrease {
        FString AchievementID; // 0x0
        int32_t Amount; // 0x10
    }; // Size: 0x14
    Params_DebugAchievementIncrease params{};
    params.AchievementID = (FString)AchievementID;
    params.Amount = (int32_t)Amount;
    ProcessEvent(func, &params);
}
void UAchievementManager::GetChallengeCategories() {}
bool UAchievementManager::IsHomeworkComplete(EHomeworkType HomeworkType, FString HomeworkName, bool AssertIfNotFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.IsHomeworkComplete"));
    struct Params_IsHomeworkComplete {
        EHomeworkType HomeworkType; // 0x0
        char pad_1[0x7];
        FString HomeworkName; // 0x8
        bool AssertIfNotFound; // 0x18
        bool ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_IsHomeworkComplete params{};
    params.HomeworkType = (EHomeworkType)HomeworkType;
    params.HomeworkName = (FString)HomeworkName;
    params.AssertIfNotFound = (bool)AssertIfNotFound;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UAchievementManager* UAchievementManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.Get"));
    struct Params_Get {
        UAchievementManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAchievementManager*)params.ReturnValue;
}
bool UAchievementManager::IsFieldGuideComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.IsFieldGuideComplete"));
    struct Params_IsFieldGuideComplete {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFieldGuideComplete params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAchievementManager::IsAchievementComplete(FName AchievementID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.IsAchievementComplete"));
    struct Params_IsAchievementComplete {
        FName AchievementID; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsAchievementComplete params{};
    params.AchievementID = (FName)AchievementID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FKnowledgeAchievementResult> UAchievementManager::GetChalkboardChallengesForClass(FName ClassPrefix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.GetChalkboardChallengesForClass"));
    struct Params_GetChalkboardChallengesForClass {
        FName ClassPrefix; // 0x0
        TArray<FKnowledgeAchievementResult> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetChalkboardChallengesForClass params{};
    params.ClassPrefix = (FName)ClassPrefix;
    ProcessEvent(func, &params);
    return (TArray<FKnowledgeAchievementResult>)params.ReturnValue;
}
bool UAchievementManager::IsAchievementActive(FName AchievementID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.IsAchievementActive"));
    struct Params_IsAchievementActive {
        FName AchievementID; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsAchievementActive params{};
    params.AchievementID = (FName)AchievementID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAchievementManager::HandleStatChanged(FName StatID, int32_t Value, int32_t Delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.HandleStatChanged"));
    struct Params_HandleStatChanged {
        FName StatID; // 0x0
        int32_t Value; // 0x8
        int32_t Delta; // 0xc
    }; // Size: 0x10
    Params_HandleStatChanged params{};
    params.StatID = (FName)StatID;
    params.Value = (int32_t)Value;
    params.Delta = (int32_t)Delta;
    ProcessEvent(func, &params);
}
int32_t UAchievementManager::GetAchievementInstanceGoal(FName AchievementID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.GetAchievementInstanceGoal"));
    struct Params_GetAchievementInstanceGoal {
        FName AchievementID; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetAchievementInstanceGoal params{};
    params.AchievementID = (FName)AchievementID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UAchievementManager* UAchievementManager::GetPure() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.GetPure"));
    struct Params_GetPure {
        UAchievementManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPure params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAchievementManager*)params.ReturnValue;
}
TArray<FKnowledgeAchievementResult> UAchievementManager::GetKnowledgeChallengesForSubject(FName KnowledgeSubject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.GetKnowledgeChallengesForSubject"));
    struct Params_GetKnowledgeChallengesForSubject {
        FName KnowledgeSubject; // 0x0
        TArray<FKnowledgeAchievementResult> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetKnowledgeChallengesForSubject params{};
    params.KnowledgeSubject = (FName)KnowledgeSubject;
    ProcessEvent(func, &params);
    return (TArray<FKnowledgeAchievementResult>)params.ReturnValue;
}
bool UAchievementManager::ClaimReward(FKnowledgeAchievementResult achievement, FAchievementReward reward) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.ClaimReward"));
    struct Params_ClaimReward {
        FKnowledgeAchievementResult achievement; // 0x0
        FAchievementReward reward; // 0x40
        bool ReturnValue; // 0x60
    }; // Size: 0x61
    Params_ClaimReward params{};
    params.achievement = (FKnowledgeAchievementResult)achievement;
    params.reward = (FAchievementReward)reward;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UAchievementManager::GetHomeworkInstances(EHomeworkType HomeworkType, FString HomeworkName, bool AssertIfNotFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.GetHomeworkInstances"));
    struct Params_GetHomeworkInstances {
        EHomeworkType HomeworkType; // 0x0
        char pad_1[0x7];
        FString HomeworkName; // 0x8
        bool AssertIfNotFound; // 0x18
        char pad_19[0x3];
        int32_t ReturnValue; // 0x1c
    }; // Size: 0x20
    Params_GetHomeworkInstances params{};
    params.HomeworkType = (EHomeworkType)HomeworkType;
    params.HomeworkName = (FString)HomeworkName;
    params.AssertIfNotFound = (bool)AssertIfNotFound;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UAchievementManager::AwardOnUnlock(FName LockId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.AwardOnUnlock"));
    struct Params_AwardOnUnlock {
        FName LockId; // 0x0
    }; // Size: 0x8
    Params_AwardOnUnlock params{};
    params.LockId = (FName)LockId;
    ProcessEvent(func, &params);
}
void UAchievementManager::DebugAwardChallenge(FString ChallengeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.DebugAwardChallenge"));
    struct Params_DebugAwardChallenge {
        FString ChallengeID; // 0x0
    }; // Size: 0x10
    Params_DebugAwardChallenge params{};
    params.ChallengeID = (FString)ChallengeID;
    ProcessEvent(func, &params);
}
FName UAchievementManager::GetAchievementType(FName AchievementID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.GetAchievementType"));
    struct Params_GetAchievementType {
        FName AchievementID; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetAchievementType params{};
    params.AchievementID = (FName)AchievementID;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
float UAchievementManager::GetFieldGuideCompletionPercentPerCategory(FAchievementCategory Category) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.GetFieldGuideCompletionPercentPerCategory"));
    struct Params_GetFieldGuideCompletionPercentPerCategory {
        FAchievementCategory Category; // 0x0
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetFieldGuideCompletionPercentPerCategory params{};
    params.Category = (FAchievementCategory)Category;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UAchievementManager::GetFieldGuideCompletionPercent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.GetFieldGuideCompletionPercent"));
    struct Params_GetFieldGuideCompletionPercent {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFieldGuideCompletionPercent params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UAchievementManager::DebugAchievementResetSteam() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.DebugAchievementResetSteam"));
    struct Params_DebugAchievementResetSteam {
    }; // Size: 0x0
    Params_DebugAchievementResetSteam params{};
    ProcessEvent(func, &params);
}
int32_t UAchievementManager::GetDelayedRewardsCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.GetDelayedRewardsCount"));
    struct Params_GetDelayedRewardsCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDelayedRewardsCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UAchievementManager::DebugCompleteAllChallenges() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.DebugCompleteAllChallenges"));
    struct Params_DebugCompleteAllChallenges {
    }; // Size: 0x0
    Params_DebugCompleteAllChallenges params{};
    ProcessEvent(func, &params);
}
TArray<FKnowledgeAchievementResult> UAchievementManager::GetDelayedRewards() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.GetDelayedRewards"));
    struct Params_GetDelayedRewards {
        TArray<FKnowledgeAchievementResult> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetDelayedRewards params{};
    ProcessEvent(func, &params);
    return (TArray<FKnowledgeAchievementResult>)params.ReturnValue;
}
int32_t UAchievementManager::GetAchievementInstances(FName AchievementID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.GetAchievementInstances"));
    struct Params_GetAchievementInstances {
        FName AchievementID; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetAchievementInstances params{};
    params.AchievementID = (FName)AchievementID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UAchievementManager::DebugAwardAchievement(FString AchievementID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.DebugAwardAchievement"));
    struct Params_DebugAwardAchievement {
        FString AchievementID; // 0x0
    }; // Size: 0x10
    Params_DebugAwardAchievement params{};
    params.AchievementID = (FString)AchievementID;
    ProcessEvent(func, &params);
}
void UAchievementManager::DebugAchievementShowState(FString AchievementID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.DebugAchievementShowState"));
    struct Params_DebugAchievementShowState {
        FString AchievementID; // 0x0
    }; // Size: 0x10
    Params_DebugAchievementShowState params{};
    params.AchievementID = (FString)AchievementID;
    ProcessEvent(func, &params);
}
void UAchievementManager::DebugAchievementOneOfEach(FString AchievementID, FString ObjectName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.DebugAchievementOneOfEach"));
    struct Params_DebugAchievementOneOfEach {
        FString AchievementID; // 0x0
        FString ObjectName; // 0x10
    }; // Size: 0x20
    Params_DebugAchievementOneOfEach params{};
    params.AchievementID = (FString)AchievementID;
    params.ObjectName = (FString)ObjectName;
    ProcessEvent(func, &params);
}
void UAchievementManager::AwardOneTimeHomework(EHomeworkType HomeworkType, FString HomeworkName, bool AssertIfNotFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.AwardOneTimeHomework"));
    struct Params_AwardOneTimeHomework {
        EHomeworkType HomeworkType; // 0x0
        char pad_1[0x7];
        FString HomeworkName; // 0x8
        bool AssertIfNotFound; // 0x18
    }; // Size: 0x19
    Params_AwardOneTimeHomework params{};
    params.HomeworkType = (EHomeworkType)HomeworkType;
    params.HomeworkName = (FString)HomeworkName;
    params.AssertIfNotFound = (bool)AssertIfNotFound;
    ProcessEvent(func, &params);
}
void UAchievementManager::AwardOneTimeAchievement(FName AchievementID, bool CheckRulesFirst, bool AssertIfNotOneTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.AwardOneTimeAchievement"));
    struct Params_AwardOneTimeAchievement {
        FName AchievementID; // 0x0
        bool CheckRulesFirst; // 0x8
        bool AssertIfNotOneTime; // 0x9
    }; // Size: 0xa
    Params_AwardOneTimeAchievement params{};
    params.AchievementID = (FName)AchievementID;
    params.CheckRulesFirst = (bool)CheckRulesFirst;
    params.AssertIfNotOneTime = (bool)AssertIfNotOneTime;
    ProcessEvent(func, &params);
}
bool UAchievementManager::ApplyOneOfEachInstance(FName AchievementID, FName InstanceName, bool isInternal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.ApplyOneOfEachInstance"));
    struct Params_ApplyOneOfEachInstance {
        FName AchievementID; // 0x0
        FName InstanceName; // 0x8
        bool isInternal; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_ApplyOneOfEachInstance params{};
    params.AchievementID = (FName)AchievementID;
    params.InstanceName = (FName)InstanceName;
    params.isInternal = (bool)isInternal;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAchievementManager::ApplyKnowledgeAction(FName KnowledgeSubject, FName KnowledgeAction, FName KnowledgeCategoryOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.ApplyKnowledgeAction"));
    struct Params_ApplyKnowledgeAction {
        FName KnowledgeSubject; // 0x0
        FName KnowledgeAction; // 0x8
        FName KnowledgeCategoryOverride; // 0x10
    }; // Size: 0x18
    Params_ApplyKnowledgeAction params{};
    params.KnowledgeSubject = (FName)KnowledgeSubject;
    params.KnowledgeAction = (FName)KnowledgeAction;
    params.KnowledgeCategoryOverride = (FName)KnowledgeCategoryOverride;
    ProcessEvent(func, &params);
}
void UAchievementManager::ApplyAchievementIncrease(FName AchievementID, int32_t Count, bool CheckRulesFirst, bool AssertIfNotAccumluate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AchievementManager.ApplyAchievementIncrease"));
    struct Params_ApplyAchievementIncrease {
        FName AchievementID; // 0x0
        int32_t Count; // 0x8
        bool CheckRulesFirst; // 0xc
        bool AssertIfNotAccumluate; // 0xd
    }; // Size: 0xe
    Params_ApplyAchievementIncrease params{};
    params.AchievementID = (FName)AchievementID;
    params.Count = (int32_t)Count;
    params.CheckRulesFirst = (bool)CheckRulesFirst;
    params.AssertIfNotAccumluate = (bool)AssertIfNotAccumluate;
    ProcessEvent(func, &params);
}
