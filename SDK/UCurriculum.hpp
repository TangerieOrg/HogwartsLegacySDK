#pragma once
#include <cstdint>
#include "EDisciplineType.hpp"
#include "FCurriculumKnowledgeRequirement.hpp"
#include "FCurriculumRequirements_Updated.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UCurriculum : public UObject {
public:
    char pad_28[0x48];
    static UCurriculum* StaticClass();
    bool SetCompleteYear_Updated(EDisciplineType Discipline, int32_t Year);
    bool SetCompleteAllTurnIns_Updated(EDisciplineType Discipline, int32_t Year);
    bool HasCompletedYear_Updated(EDisciplineType Discipline, int32_t Year);
    void GivePlayerRewardKnowledge_Updated(EDisciplineType Discipline, int32_t Year);
    void GivePlayerRewardItems_Updated(EDisciplineType Discipline, int32_t Year);
    bool GetUncompletedTurnIns_Updated(EDisciplineType Discipline, int32_t Year, TArray<FCurriculumRequirements_Updated>& UncompletedTurnIns);
    int32_t GetMaxYear();
    int32_t GetHighestYearCompletedOverall_Updated();
    int32_t GetHighestYearCompleted_Updated(EDisciplineType Discipline);
    int32_t GetCurrentYear_Updated(EDisciplineType Discipline);
    TArray<FCurriculumKnowledgeRequirement> GetApplicableKnowledgeCards(EDisciplineType Discipline, int32_t Year);
    static UCurriculum* Get();
}; // Size: 0x70
#pragma pack(pop)
