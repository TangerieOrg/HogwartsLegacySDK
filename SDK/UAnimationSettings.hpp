#pragma once
#include <cstdint>
#include "ECustomAttributeBlendType.hpp"
#include "FCustomAttributeSetting.hpp"
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UAnimationSettings : public UDeveloperSettings {
public:
    int32_t CompressCommandletVersion; // 0x38
    char pad_3c[0x4];
    TArray<FString> KeyEndEffectorsMatchNameArray; // 0x40
    bool ForceRecompression; // 0x50
    bool bForceBelowThreshold; // 0x51
    bool bFirstRecompressUsingCurrentOrDefault; // 0x52
    bool bRaiseMaxErrorToExisting; // 0x53
    bool bEnablePerformanceLog; // 0x54
    bool bStripAnimationDataOnDedicatedServer; // 0x55
    bool bTickAnimationOnSkeletalMeshInit; // 0x56
    char pad_57[0x1];
    TArray<FCustomAttributeSetting> BoneCustomAttributesNames; // 0x58
    TArray<FString> BoneNamesWithCustomAttributes; // 0x68
    char pad_78[0x50];
    ECustomAttributeBlendType DefaultAttributeBlendMode; // 0xc8
    char pad_c9[0x7];
    static UAnimationSettings* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
