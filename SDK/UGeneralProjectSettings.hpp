#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UGeneralProjectSettings : public UObject {
public:
    FString CompanyName; // 0x28
    FString CompanyDistinguishedName; // 0x38
    FString CopyrightNotice; // 0x48
    FString Description; // 0x58
    FString Homepage; // 0x68
    FString LicensingTerms; // 0x78
    FString PrivacyPolicy; // 0x88
    FGuid ProjectID; // 0x98
    FString ProjectName; // 0xa8
    FString ProjectVersion; // 0xb8
    FString SupportContact; // 0xc8
    char pad_d8[0x30];
    bool bShouldWindowPreserveAspectRatio; // 0x108
    bool bUseBorderlessWindow; // 0x109
    bool bStartInVR; // 0x10a
    bool bAllowWindowResize; // 0x10b
    bool bAllowClose; // 0x10c
    bool bAllowMaximize; // 0x10d
    bool bAllowMinimize; // 0x10e
    char pad_10f[0x1];
    static UGeneralProjectSettings* StaticClass();
}; // Size: 0x110
#pragma pack(pop)
