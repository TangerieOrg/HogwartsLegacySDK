#pragma once
#include <cstdint>
#include "ECustomMaterialOutputType.hpp"
#include "FCustomDefine.hpp"
#include "FCustomInput.hpp"
#include "FCustomOutput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionCustom : public UMaterialExpression {
public:
    FString Code; // 0x40
    ECustomMaterialOutputType OutputType; // 0x50
    char pad_51[0x7];
    FString Description; // 0x58
    TArray<FCustomInput> Inputs; // 0x68
    TArray<FCustomOutput> AdditionalOutputs; // 0x78
    TArray<FCustomDefine> AdditionalDefines; // 0x88
    TArray<FString> IncludeFilePaths; // 0x98
    static UMaterialExpressionCustom* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
