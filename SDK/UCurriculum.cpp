#include "EDisciplineType.hpp"
#include "FCurriculumKnowledgeRequirement.hpp"
#include "FCurriculumRequirements_Updated.hpp"
#include "UCurriculum.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UCurriculum* UCurriculum::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Curriculum");
    return (UCurriculum*)res;
}
bool UCurriculum::GetUncompletedTurnIns_Updated(EDisciplineType Discipline, int32_t Year, TArray<FCurriculumRequirements_Updated>& UncompletedTurnIns) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Curriculum.GetUncompletedTurnIns_Updated"));
    struct Params_GetUncompletedTurnIns_Updated {
        EDisciplineType Discipline; // 0x0
        char pad_1[0x3];
        int32_t Year; // 0x4
        TArray<FCurriculumRequirements_Updated> UncompletedTurnIns; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetUncompletedTurnIns_Updated params{};
    params.Discipline = (EDisciplineType)Discipline;
    params.Year = (int32_t)Year;
    params.UncompletedTurnIns = (TArray<FCurriculumRequirements_Updated>)UncompletedTurnIns;
    ProcessEvent(func, &params);
    UncompletedTurnIns = params.UncompletedTurnIns;
    return (bool)params.ReturnValue;
}
int32_t UCurriculum::GetHighestYearCompleted_Updated(EDisciplineType Discipline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Curriculum.GetHighestYearCompleted_Updated"));
    struct Params_GetHighestYearCompleted_Updated {
        EDisciplineType Discipline; // 0x0
        char pad_1[0x3];
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetHighestYearCompleted_Updated params{};
    params.Discipline = (EDisciplineType)Discipline;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UCurriculum::GetHighestYearCompletedOverall_Updated() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Curriculum.GetHighestYearCompletedOverall_Updated"));
    struct Params_GetHighestYearCompletedOverall_Updated {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetHighestYearCompletedOverall_Updated params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UCurriculum::SetCompleteYear_Updated(EDisciplineType Discipline, int32_t Year) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Curriculum.SetCompleteYear_Updated"));
    struct Params_SetCompleteYear_Updated {
        EDisciplineType Discipline; // 0x0
        char pad_1[0x3];
        int32_t Year; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_SetCompleteYear_Updated params{};
    params.Discipline = (EDisciplineType)Discipline;
    params.Year = (int32_t)Year;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCurriculum::SetCompleteAllTurnIns_Updated(EDisciplineType Discipline, int32_t Year) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Curriculum.SetCompleteAllTurnIns_Updated"));
    struct Params_SetCompleteAllTurnIns_Updated {
        EDisciplineType Discipline; // 0x0
        char pad_1[0x3];
        int32_t Year; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_SetCompleteAllTurnIns_Updated params{};
    params.Discipline = (EDisciplineType)Discipline;
    params.Year = (int32_t)Year;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCurriculum::HasCompletedYear_Updated(EDisciplineType Discipline, int32_t Year) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Curriculum.HasCompletedYear_Updated"));
    struct Params_HasCompletedYear_Updated {
        EDisciplineType Discipline; // 0x0
        char pad_1[0x3];
        int32_t Year; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasCompletedYear_Updated params{};
    params.Discipline = (EDisciplineType)Discipline;
    params.Year = (int32_t)Year;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCurriculum::GivePlayerRewardKnowledge_Updated(EDisciplineType Discipline, int32_t Year) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Curriculum.GivePlayerRewardKnowledge_Updated"));
    struct Params_GivePlayerRewardKnowledge_Updated {
        EDisciplineType Discipline; // 0x0
        char pad_1[0x3];
        int32_t Year; // 0x4
    }; // Size: 0x8
    Params_GivePlayerRewardKnowledge_Updated params{};
    params.Discipline = (EDisciplineType)Discipline;
    params.Year = (int32_t)Year;
    ProcessEvent(func, &params);
}
void UCurriculum::GivePlayerRewardItems_Updated(EDisciplineType Discipline, int32_t Year) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Curriculum.GivePlayerRewardItems_Updated"));
    struct Params_GivePlayerRewardItems_Updated {
        EDisciplineType Discipline; // 0x0
        char pad_1[0x3];
        int32_t Year; // 0x4
    }; // Size: 0x8
    Params_GivePlayerRewardItems_Updated params{};
    params.Discipline = (EDisciplineType)Discipline;
    params.Year = (int32_t)Year;
    ProcessEvent(func, &params);
}
int32_t UCurriculum::GetMaxYear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Curriculum.GetMaxYear"));
    struct Params_GetMaxYear {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxYear params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UCurriculum::GetCurrentYear_Updated(EDisciplineType Discipline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Curriculum.GetCurrentYear_Updated"));
    struct Params_GetCurrentYear_Updated {
        EDisciplineType Discipline; // 0x0
        char pad_1[0x3];
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetCurrentYear_Updated params{};
    params.Discipline = (EDisciplineType)Discipline;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
TArray<FCurriculumKnowledgeRequirement> UCurriculum::GetApplicableKnowledgeCards(EDisciplineType Discipline, int32_t Year) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Curriculum.GetApplicableKnowledgeCards"));
    struct Params_GetApplicableKnowledgeCards {
        EDisciplineType Discipline; // 0x0
        char pad_1[0x3];
        int32_t Year; // 0x4
        TArray<FCurriculumKnowledgeRequirement> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetApplicableKnowledgeCards params{};
    params.Discipline = (EDisciplineType)Discipline;
    params.Year = (int32_t)Year;
    ProcessEvent(func, &params);
    return (TArray<FCurriculumKnowledgeRequirement>)params.ReturnValue;
}
UCurriculum* UCurriculum::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Curriculum.Get"));
    struct Params_Get {
        UCurriculum* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UCurriculum*)params.ReturnValue;
}
