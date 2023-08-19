#pragma once
#include <cstdint>
#include "EKnowledgeAction.hpp"
#include "FValueComparison.hpp"
#include "UModFilter_GainKnowledge_Base.hpp"
class UObject;
struct FKnowledgeGainInfo;
#pragma pack(push, 1)
class UModFilter_GainKnowledge_Custom : public UModFilter_GainKnowledge_Base {
public:
    bool bUseCategoryFilter; // 0x30
    char pad_31[0x3];
    FName CategoryFilter; // 0x34
    bool bUseKnowledgeActionFilter; // 0x3c
    EKnowledgeAction KnowledgeActionFilter; // 0x3d
    bool bUseCarrierSubtypeFilter; // 0x3e
    char pad_3f[0x1];
    FName CarrierSubtypeFilter; // 0x40
    bool bUseSubjectFilter; // 0x48
    char pad_49[0x3];
    FName SubjectFilter; // 0x4c
    bool bUseValueFilter; // 0x54
    char pad_55[0x3];
    FValueComparison ValueFilter; // 0x58
    static UModFilter_GainKnowledge_Custom* StaticClass();
    bool BlueprintPassesKnowledgeGainFilter(UObject* InTargetObject, FKnowledgeGainInfo& KnowledgeGainInfo);
}; // Size: 0x60
#pragma pack(pop)
