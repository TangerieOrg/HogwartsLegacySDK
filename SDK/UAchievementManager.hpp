#pragma once
#include <cstdint>
#include "EHomeworkType.hpp"
#include "FAchievementCategory.hpp"
#include "FAchievementReward.hpp"
#include "FKnowledgeAchievementResult.hpp"
#include "UObject.hpp"
class AActor;
#pragma pack(push, 1)
class UAchievementManager : public UObject {
public:
    char pad_28[0x478];
    static UAchievementManager* StaticClass();
    void SetHomeworkWatcher(EHomeworkType HomeworkType, FString HomeworkName, AActor* Caller, bool bEnable, bool AssertIfNotFound);
    void SetAchievementWatcher(FName AchievementID, AActor* Caller, bool bEnable);
    void ResetAchievement(FName AchievementID);
    void PatchLoadedGame();
    void OnSaveGameLoaded();
    void OnPreGameLoad();
    void OnNewGame();
    void OnCurtainRaised();
    bool IsHomeworkComplete(EHomeworkType HomeworkType, FString HomeworkName, bool AssertIfNotFound);
    bool IsFieldGuideComplete();
    bool IsAchievementComplete(FName AchievementID);
    bool IsAchievementActive(FName AchievementID);
    void HandleStatChanged(FName StatID, int32_t Value, int32_t Delta);
    static UAchievementManager* GetPure();
    TArray<FKnowledgeAchievementResult> GetKnowledgeChallengesForSubject(FName KnowledgeSubject);
    int32_t GetHomeworkInstances(EHomeworkType HomeworkType, FString HomeworkName, bool AssertIfNotFound);
    float GetFieldGuideCompletionPercentPerCategory(FAchievementCategory Category);
    float GetFieldGuideCompletionPercent();
    int32_t GetDelayedRewardsCount();
    TArray<FKnowledgeAchievementResult> GetDelayedRewards();
    FKnowledgeAchievementResult GetChallengeLevel(FName AchievementID);
    void GetChallengeCategories();
    TArray<FKnowledgeAchievementResult> GetChalkboardChallengesForClass(FName ClassPrefix);
    FName GetAchievementType(FName AchievementID);
    int32_t GetAchievementInstances(FName AchievementID);
    int32_t GetAchievementInstanceGoal(FName AchievementID);
    static UAchievementManager* Get();
    void DebugCompleteAllChallenges();
    void DebugAwardChallenge(FString ChallengeID);
    void DebugAwardAchievement(FString AchievementID);
    void DebugAchievementShowState(FString AchievementID);
    void DebugAchievementResetSteam();
    void DebugAchievementOneOfEach(FString AchievementID, FString ObjectName);
    void DebugAchievementIncrease(FString AchievementID, int32_t Amount);
    bool ClaimReward(FKnowledgeAchievementResult achievement, FAchievementReward reward);
    void AwardOnUnlock(FName LockId);
    void AwardOneTimeHomework(EHomeworkType HomeworkType, FString HomeworkName, bool AssertIfNotFound);
    void AwardOneTimeAchievement(FName AchievementID, bool CheckRulesFirst, bool AssertIfNotOneTime);
    bool ApplyWhitelistInstance(FName AchievementID, FName InstanceName);
    bool ApplyOneOfEachInstance(FName AchievementID, FName InstanceName, bool isInternal);
    void ApplyKnowledgeAction(FName KnowledgeSubject, FName KnowledgeAction, FName KnowledgeCategoryOverride);
    void ApplyHomework(EHomeworkType HomeworkType, FString HomeworkName, int32_t Count, bool AssertIfNotFound);
    void ApplyAchievementIncrease(FName AchievementID, int32_t Count, bool CheckRulesFirst, bool AssertIfNotAccumluate);
    bool AnyDelayedRewards();
}; // Size: 0x4a0
#pragma pack(pop)
