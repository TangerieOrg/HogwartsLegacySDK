#pragma once
#include <cstdint>
#include "EFieldResolutionType.hpp"
#include "UFieldSystemMetaData.hpp"
#pragma pack(push, 1)
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData {
public:
    EFieldResolutionType ResolutionType; // 0xc8
    char pad_c9[0x7];
    static UFieldSystemMetaDataProcessingResolution* StaticClass();
    UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(EFieldResolutionType ResolutionType);
}; // Size: 0xd0
#pragma pack(pop)
