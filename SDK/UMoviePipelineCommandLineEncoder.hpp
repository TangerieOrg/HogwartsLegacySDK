#pragma once
#include <cstdint>
#include "EMoviePipelineEncodeQuality.hpp"
#include "UMoviePipelineSetting.hpp"
#pragma pack(push, 1)
class UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting {
public:
    FString FileNameFormatOverride; // 0x48
    EMoviePipelineEncodeQuality Quality; // 0x58
    char pad_59[0x7];
    FString AdditionalCommandLineArgs; // 0x60
    bool bDeleteSourceFiles; // 0x70
    bool bSkipEncodeOnRenderCanceled; // 0x71
    char pad_72[0x16];
    static UMoviePipelineCommandLineEncoder* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
