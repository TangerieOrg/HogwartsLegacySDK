#pragma once
#include <cstdint>
#include "UCommandlet.hpp"
#pragma pack(push, 1)
class UOodleNetworkTrainerCommandlet : public UCommandlet {
public:
    bool bCompressionTest; // 0x80
    char pad_81[0x3];
    int32_t HashTableSize; // 0x84
    int32_t DictionarySize; // 0x88
    int32_t DictionaryTrials; // 0x8c
    int32_t TrialRandomness; // 0x90
    int32_t TrialGenerations; // 0x94
    bool bNoTrials; // 0x98
    char pad_99[0x7];
    static UOodleNetworkTrainerCommandlet* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
