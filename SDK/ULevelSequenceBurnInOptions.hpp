#pragma once
#include <cstdint>
#include "FSoftClassPath.hpp"
#include "UObject.hpp"
class ULevelSequenceBurnInInitSettings;
#pragma pack(push, 1)
class ULevelSequenceBurnInOptions : public UObject {
public:
    bool bUseBurnIn; // 0x28
    char pad_29[0x7];
    FSoftClassPath BurnInClass; // 0x30
    ULevelSequenceBurnInInitSettings* Settings; // 0x48
    static ULevelSequenceBurnInOptions* StaticClass();
    void SetBurnIn(FSoftClassPath InBurnInClass);
}; // Size: 0x50
#pragma pack(pop)
