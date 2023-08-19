#pragma once
#include <cstdint>
#include "UAISenseConfig_Cognition.hpp"
class UClass;
class UCogGroupUpDirection;
class UCogGroupFocusDirection;
class UCogGroupEvaluation;
class UCogGroupPerceiverPoint;
class UCogGroupTargetPoint;
class UCogGroupEvaluation_SecondOrder;
class UCogGroupDebug;
#pragma pack(push, 1)
class UAISenseConfig_CogGroup : public UAISenseConfig_Cognition {
public:
    UClass* Implementation; // 0x88
    UCogGroupFocusDirection* FocusDirectionClass; // 0x90
    UCogGroupUpDirection* UpDirectionClass; // 0x98
    UCogGroupPerceiverPoint* PerceiverPointClass; // 0xa0
    float TraceRadius; // 0xa8
    char pad_ac[0x4];
    UCogGroupTargetPoint* TargetPointClass; // 0xb0
    TArray<UCogGroupEvaluation*> TargetEvaluationArray; // 0xb8
    TArray<UCogGroupEvaluation_SecondOrder*> TargetEvaluationArray_SecondOrder; // 0xc8
    TArray<UCogGroupEvaluation*> BackgroundTargetEvaluationArray; // 0xd8
    float PriorityBase; // 0xe8
    bool bNormalizePriorityWeights; // 0xec
    char pad_ed[0x3];
    float MinBufferDistance; // 0xf0
    float MaxBufferDistance; // 0xf4
    float MinReevaluationTime; // 0xf8
    char pad_fc[0x4];
    UCogGroupDebug* DebugClass; // 0x100
    static UAISenseConfig_CogGroup* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
