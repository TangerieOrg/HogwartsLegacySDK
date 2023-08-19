#pragma once
#include <cstdint>
#include "UScreen.hpp"
#pragma pack(push, 1)
class UMenuReaderTestScreen : public UScreen {
public:
    TArray<FString> ButtonStrings; // 0x370
    TArray<FString> DummyPronunciationStrings; // 0x380
    static UMenuReaderTestScreen* StaticClass();
}; // Size: 0x390
#pragma pack(pop)
