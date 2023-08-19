#pragma once
#include <cstdint>
#include "EFourPlayerSplitScreenType.hpp"
#include "EThreePlayerSplitScreenType\Type.hpp"
#include "ETwoPlayerSplitScreenType\Type.hpp"
#include "FGameModeName.hpp"
#include "FSoftClassPath.hpp"
#include "FSoftObjectPath.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UGameMapsSettings : public UObject {
public:
    FString LocalMapOptions; // 0x28
    FSoftObjectPath TransitionMap; // 0x38
    bool bUseSplitscreen; // 0x50
    ETwoPlayerSplitScreenType::Type TwoPlayerSplitscreenLayout; // 0x51
    EThreePlayerSplitScreenType::Type ThreePlayerSplitscreenLayout; // 0x52
    EFourPlayerSplitScreenType FourPlayerSplitscreenLayout; // 0x53
    bool bOffsetPlayerGamepadIds; // 0x54
    char pad_55[0x3];
    FSoftClassPath GameInstanceClass; // 0x58
    FSoftObjectPath GameDefaultMap; // 0x70
    FSoftObjectPath ServerDefaultMap; // 0x88
    FSoftClassPath GlobalDefaultGameMode; // 0xa0
    FSoftClassPath GlobalDefaultServerGameMode; // 0xb8
    TArray<FGameModeName> GameModeMapPrefixes; // 0xd0
    TArray<FGameModeName> GameModeClassAliases; // 0xe0
    static UGameMapsSettings* StaticClass();
    void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);
    bool GetSkipAssigningGamepadToPlayer1();
    static UGameMapsSettings* GetGameMapsSettings();
}; // Size: 0xf0
#pragma pack(pop)
