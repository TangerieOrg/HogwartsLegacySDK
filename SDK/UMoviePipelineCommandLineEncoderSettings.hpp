#pragma once
#include <cstdint>
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings {
public:
    FString ExecutablePath; // 0x38
    char pad_48[0x18];
    FString VideoCodec; // 0x60
    FString AudioCodec; // 0x70
    FString OutputFileExtension; // 0x80
    FString CommandLineFormat; // 0x90
    FString VideoInputStringFormat; // 0xa0
    FString AudioInputStringFormat; // 0xb0
    FString EncodeSettings_Low; // 0xc0
    FString EncodeSettings_Med; // 0xd0
    FString EncodeSettings_High; // 0xe0
    FString EncodeSettings_Epic; // 0xf0
    static UMoviePipelineCommandLineEncoderSettings* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
