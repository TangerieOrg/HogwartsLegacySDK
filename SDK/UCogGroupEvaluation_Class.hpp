#pragma once
#include <cstdint>
#include "UCogGroupEvaluation.hpp"
class UClass;
#pragma pack(push, 1)
class UCogGroupEvaluation_Class : public UCogGroupEvaluation {
public:
    TArray<UClass*> IncludeClasses; // 0x30
    static UCogGroupEvaluation_Class* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
