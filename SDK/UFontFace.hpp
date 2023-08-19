#pragma once
#include <cstdint>
#include "EFontHinting.hpp"
#include "EFontLayoutMethod.hpp"
#include "EFontLoadingPolicy.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UFontFace : public UObject {
public:
    char pad_28[0x8];
    FString SourceFilename; // 0x30
    EFontHinting Hinting; // 0x40
    EFontLoadingPolicy LoadingPolicy; // 0x41
    EFontLayoutMethod LayoutMethod; // 0x42
    char pad_43[0x15];
    static UFontFace* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
