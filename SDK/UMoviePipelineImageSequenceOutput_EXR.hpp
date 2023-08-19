#pragma once
#include <cstdint>
#include "EEXRCompressionFormat.hpp"
#include "UMoviePipelineImageSequenceOutputBase.hpp"
#pragma pack(push, 1)
class UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase {
public:
    EEXRCompressionFormat Compression; // 0x68
    bool bMultilayer; // 0x69
    char pad_6a[0x6];
    static UMoviePipelineImageSequenceOutput_EXR* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
